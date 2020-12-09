/*
** EPITECH PROJECT, 2020
** load_game
** File description:
** load containt of game
*/

#include "my.h"

void load_dog(duck_t *dog)
{
    sfTexture *t_dog;

    dog->r_dog = (sfIntRect) {0, 0, 62, 48};
    dog->s_dog = sfSprite_create();
    t_dog = sfTexture_createFromFile("assets/dog.png", &dog->r_dog);
    sfSprite_setTexture(dog->s_dog, t_dog, sfFalse);
    free(t_dog);
    sfSprite_setPosition(dog->s_dog, (sfVector2f) {0, 800});
    sfSprite_setScale(dog->s_dog, (sfVector2f) {3, 3});
}

void load_duc_lvl1(duck_t *duck)
{
    sfTexture *t_duck;

    duck->r_duck_1 = (sfIntRect) {0, 0, 37, 40};
    duck->s_duck_1 = sfSprite_create();
    t_duck = sfTexture_createFromFile("assets/duck_1.png", &duck->r_duck_1);
    sfSprite_setTexture(duck->s_duck_1, t_duck, sfFalse);
    sfSprite_setScale(duck->s_duck_1, (sfVector2f) {3, 3});
    sfSprite_setOrigin(duck->s_duck_1, (sfVector2f) {37/2, 40/2});
    sfSprite_setPosition(duck->s_duck_1, (sfVector2f) {-62, rand() % 700 + 1});
    duck->speed_duck = (sfVector2f) {rand() % 20 + 5, 0};
}

void load_game(duck_t *duck)
{
    load_dog(duck);
    load_duc_lvl1(duck);
}