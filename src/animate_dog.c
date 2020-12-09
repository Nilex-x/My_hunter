/*
** EPITECH PROJECT, 2020
** animate_dog
** File description:
** animate dog
*/

#include "my.h"

void animate_dog(duck_t *dog, window_t *window)
{
    sfTexture *t_dog;
    sfVector2f posi_dog = sfSprite_getPosition(dog->s_dog);
    int top = 0;

    if (posi_dog.x < 750) {
        sfSprite_move(dog->s_dog, (sfVector2f) {15, 0});
    } else if (posi_dog.x >= 750 && posi_dog.y > 650) {
        top = 50;
        sfSprite_move(dog->s_dog, (sfVector2f) {0, -5});
    }
    if (window->seconds > 0.1) {
        if (dog->r_dog.left > 120) {
            dog->r_dog.left = 0;
            dog->r_dog.top = top;
        } else
            dog->r_dog.left += 60;
        t_dog = sfTexture_createFromFile("assets/dog.png", &dog->r_dog);
        sfSprite_setTexture(dog->s_dog, t_dog, sfFalse);
        sfClock_restart(window->clock);
    }
    sfRenderWindow_drawSprite(window->window, dog->s_dog, NULL);
}

void get_random_nbr(duck_t *duck, window_t *window)
{
    sfVector2f posi_random;
    int rand_min = 10 + window->multi;
    int rand_max = 15 + window->multi;

    posi_random.y = rand() % 700 + 1;
    posi_random.x = -62;
    sfSprite_setPosition(duck->s_duck_1, posi_random);
    duck->speed_duck = (sfVector2f) {rand() % rand_max + rand_min, 0};
    window->hit = 0;
}

void fail(window_t *window, duck_t *duck)
{
    sfTexture *t_sprite;

    get_random_nbr(duck, window);
    window->r_life.left += 31;
    window->life--;
    t_sprite = sfTexture_createFromFile("assets/life.png", &window->r_life);
    sfSprite_setTexture(window->s_life, t_sprite, sfFalse);
}

void animate_duck(duck_t *duck, window_t *window)
{
    sfTexture *t_sprite;
    sfVector2f posi = sfSprite_getPosition(duck->s_duck_1);

    if (posi.x > 1920) {
        fail(window, duck);
    } else if (window->hit == 1) {
        get_random_nbr(duck, window);
        window->score += 10;
    }
    sfSprite_move(duck->s_duck_1, duck->speed_duck);
    if (window->seconds > 0.1) {
        if (duck->r_duck_1.left > 79) {
            duck->r_duck_1.left = 0;
        } else
            duck->r_duck_1.left += 40;
        t_sprite = sfTexture_createFromFile("assets/duck_1.png", \
                                            &duck->r_duck_1);
        sfSprite_setTexture(duck->s_duck_1, t_sprite, sfFalse);
        free(t_sprite);
        sfClock_restart(window->clock);
    }
    sfRenderWindow_drawSprite(window->window, duck->s_duck_1, NULL);
}