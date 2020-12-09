/*
** EPITECH PROJECT, 2020
** load_sound
** File description:
** load sound of game
*/

#include "my.h"

void load_music(window_t * window)
{
    window->m_menu = sfMusic_createFromFile("assets/intro.ogg");
    sfMusic_setLoop(window->m_menu, sfTrue);
    sfMusic_play(window->m_menu);
}

void load_life(window_t *window)
{
    sfTexture *t_life;

    window->r_life = (sfIntRect) {0, 0, 96, 32};
    window->s_life = sfSprite_create();
    t_life = sfTexture_createFromFile("assets/life.png", &window->r_life);
    sfSprite_setTexture(window->s_life, t_life, sfFalse);
    free(t_life);
    sfSprite_setPosition(window->s_life, (sfVector2f) {10, 930});
    sfSprite_setScale(window->s_life, (sfVector2f) {3, 3});
}

void load_title(window_t *window)
{
    sfFont *font = sfFont_createFromFile("assets/Games.ttf");

    window->title_high = sfText_create();
    window->title_score = sfText_create();
    sfText_setString(window->title_high, "Highscore: ");
    sfText_setString(window->title_score, "score: ");
    sfText_setFont(window->title_high, font);
    sfText_setFont(window->title_score, font);
    sfText_setStyle(window->title_high, sfTextBold);
    sfText_setStyle(window->title_score, sfTextBold);
    sfText_setColor(window->title_high, sfBlack);
    sfText_setColor(window->title_score, sfBlack);
    sfText_setScale(window->title_high, (sfVector2f) {1.5, 1.5});
    sfText_setScale(window->title_score, (sfVector2f) {1.5, 1.5});
    sfText_setPosition(window->title_high, (sfVector2f) {1550, 950});
    sfText_setPosition(window->title_score, (sfVector2f) {1300, 950});
}