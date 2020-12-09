/*
** EPITECH PROJECT, 2020
** load_window
** File description:
** load window
*/

#include "my.h"

void load_window(window_t *window)
{
    sfVideoMode mode = {1920, 1080, 32};

    window->window = sfRenderWindow_create(mode, "my_hunter",
                                        sfDefaultStyle, NULL);
    sfRenderWindow_setVerticalSyncEnabled(window->window, sfTrue);
    sfRenderWindow_setFramerateLimit(window->window, 30);
}

void load_background(window_t *back)
{
    sfIntRect pos = {0, 0, 1920, 1080};

    sfTexture *t_back = sfTexture_createFromFile("assets/stage.png", &pos);
    back->s_back = sfSprite_create();
    sfSprite_setScale(back->s_back, (sfVector2f) {1.5, 1.4});
    sfSprite_setTexture(back->s_back, t_back, sfFalse);
    free(t_back);
}

void load_score_and_high(window_t *window)
{
    char *score = get_high_score();
    sfFont *font = sfFont_createFromFile("assets/Games.ttf");

    window->highscore = my_atoi(score);
    window->t_score = sfText_create();
    window->t_highscore = sfText_create();
    sfText_setString(window->t_highscore, score);
    sfText_setString(window->t_score, "0");
    sfText_setFont(window->t_highscore, font);
    sfText_setFont(window->t_score, font);
    sfText_setStyle(window->t_highscore, sfTextBold);
    sfText_setStyle(window->t_score, sfTextBold);
    sfText_setColor(window->t_highscore, sfRed);
    sfText_setColor(window->t_score, sfRed);
    sfText_setScale(window->t_highscore, (sfVector2f) {1.5, 1.5});
    sfText_setScale(window->t_score, (sfVector2f) {1.5, 1.5});
    sfText_setPosition(window->t_highscore, (sfVector2f) {1820, 950});
    sfText_setPosition(window->t_score, (sfVector2f) {1470, 950});
    load_title(window);
}

void load_compoment(window_t *window, menu_t *menu, pause_t *pause, \
                    duck_t *duck)
{
    window->score = 0;
    window->multi = 0;
    window->lvl = 1;
    window->hit = 0;
    window->life = 3;
    window->clock = sfClock_create();
    window->window = NULL;
    window->s_back = NULL;
    window->i = MENU;
    load_level(window);
    load_life(window);
    load_score_and_high(window);
    load_window(window);
    load_background(window);
    load_menu(menu);
    load_pause(pause);
    load_crosshair(window);
    load_game(duck);
    load_bullet(window);
}