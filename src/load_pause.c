/*
** EPITECH PROJECT, 2020
** load_pause
** File description:
** load_pause
*/

#include "my.h"

void load_back(pause_t *pause)
{
    sfIntRect pos = {0, 0, 170, 137};
    sfTexture *t_pause = sfTexture_createFromFile("assets/pause.png",
                                                &pos);

    pause->s_pause = sfSprite_create();
    sfSprite_setTexture(pause->s_pause, t_pause, sfFalse);
    free(t_pause);
    sfSprite_setOrigin(pause->s_pause, (sfVector2f) {85, 68.5});
    sfSprite_setPosition(pause->s_pause, (sfVector2f) {960, 500});
    sfSprite_setScale(pause->s_pause, (sfVector2f) {5, 5});
}

void load_pause_resume(pause_t *pause)
{
    sfIntRect pos = {0, 0, 190, 49};
    sfTexture *t_play = sfTexture_createFromFile("assets/button/button.png",
                                                &pos);
    sfVector2f posi = {960, 500};
    sfFont *font;

    pause->t_resume = sfText_create();
    pause->s_resume = sfSprite_create();
    font = sfFont_createFromFile("assets/Games.ttf");
    sfText_setString(pause->t_resume, "RESUME");
    sfText_setFont(pause->t_resume, font);
    sfText_setStyle(pause->t_resume, sfTextBold);
    sfText_setScale(pause->t_resume, (sfVector2f) {1.5, 1.5});
    sfText_setPosition(pause->t_resume, (sfVector2f) {870, 465});
    sfSprite_setTexture(pause->s_resume, t_play, sfFalse);
    free(t_play);
    sfSprite_setOrigin(pause->s_resume, (sfVector2f) {95, 24.5});
    sfSprite_setScale(pause->s_resume, (sfVector2f) {1.5, 1.5});
    sfSprite_setPosition(pause->s_resume, posi);
}

void load_pause_quit(pause_t *pause)
{
    sfIntRect pos = {0, 0, 190, 49};
    sfTexture *t_play = sfTexture_createFromFile("assets/button/button.png",
                                                &pos);
    sfVector2f posi = {960, 700};
    sfFont *font;

    pause->t_quit = sfText_create();
    pause->s_quit = sfSprite_create();
    font = sfFont_createFromFile("assets/Games.ttf");
    sfText_setString(pause->t_quit, "EXIT");
    sfText_setFont(pause->t_quit, font);
    sfText_setStyle(pause->t_quit, sfTextBold);
    sfText_setScale(pause->t_quit, (sfVector2f) {1.5, 1.5});
    sfText_setPosition(pause->t_quit, (sfVector2f) {900, 665});
    sfSprite_setTexture(pause->s_quit, t_play, sfFalse);
    sfSprite_setOrigin(pause->s_quit, (sfVector2f) {95, 24.5});
    sfSprite_setScale(pause->s_quit, (sfVector2f) {1.5, 1.5});
    sfSprite_setPosition(pause->s_quit, posi);
}

void load_pause_menu(pause_t *pause)
{
    sfIntRect pos = {0, 0, 190, 49};
    sfTexture *t_play = sfTexture_createFromFile("assets/button/button.png",
                                                &pos);
    sfVector2f posi = {960, 600};
    sfFont *font;

    pause->t_menu = sfText_create();
    pause->s_menu = sfSprite_create();
    font = sfFont_createFromFile("assets/Games.ttf");
    sfText_setString(pause->t_menu, "MENU");
    sfText_setFont(pause->t_menu, font);
    sfText_setStyle(pause->t_menu, sfTextBold);
    sfText_setScale(pause->t_menu, (sfVector2f) {1.5, 1.5});
    sfText_setPosition(pause->t_menu, (sfVector2f) {890, 565});
    sfSprite_setTexture(pause->s_menu, t_play, sfFalse);
    sfSprite_setOrigin(pause->s_menu, (sfVector2f) {95, 24.5});
    sfSprite_setScale(pause->s_menu, (sfVector2f) {1.5, 1.5});
    sfSprite_setPosition(pause->s_menu, posi);
}

void load_pause(pause_t *pause)
{
    load_back(pause);
    load_pause_resume(pause);
    load_pause_menu(pause);
    load_pause_quit(pause);
}