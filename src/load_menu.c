/*
** EPITECH PROJECT, 2020
** load_menu
** File description:
** load componement of menu
*/

#include "my.h"

void load_button_start(menu_t *menu)
{
    sfIntRect pos = {0, 0, 190, 49};
    sfTexture *t_play = sfTexture_createFromFile("assets/button/button.png",
                                                &pos);
    sfVector2f posi = {960, 400};
    sfFont *font;

    menu->t_play = sfText_create();
    menu->s_play = sfSprite_create();
    font = sfFont_createFromFile("assets/Games.ttf");
    sfText_setString(menu->t_play, "PLAY");
    sfText_setFont(menu->t_play, font);
    sfText_setStyle(menu->t_play, sfTextBold);
    sfText_setScale(menu->t_play, (sfVector2f) {1.5, 1.5});
    sfText_setPosition(menu->t_play, (sfVector2f) {900, 365});
    sfSprite_setTexture(menu->s_play, t_play, sfFalse);
    free(t_play);
    sfSprite_setOrigin(menu->s_play, (sfVector2f) {95, 24.5});
    sfSprite_setScale(menu->s_play, (sfVector2f) {1.5, 1.5});
    sfSprite_setPosition(menu->s_play, posi);
}

void load_button_quit(menu_t *menu)
{
    sfIntRect pos = {0, 0, 190, 49};
    sfTexture *t_play = sfTexture_createFromFile("assets/button/button.png",
                                                &pos);
    sfVector2f posi = {960, 500};
    sfFont *font;

    menu->t_quit = sfText_create();
    menu->s_quit = sfSprite_create();
    font = sfFont_createFromFile("assets/Games.ttf");
    sfText_setString(menu->t_quit, "EXIT");
    sfText_setFont(menu->t_quit, font);
    sfText_setStyle(menu->t_quit, sfTextBold);
    sfText_setScale(menu->t_quit, (sfVector2f) {1.5, 1.5});
    sfText_setPosition(menu->t_quit, (sfVector2f) {900, 465});
    sfSprite_setTexture(menu->s_quit, t_play, sfFalse);
    free(t_play);
    sfSprite_setOrigin(menu->s_quit, (sfVector2f) {95, 24.5});
    sfSprite_setScale(menu->s_quit, (sfVector2f) {1.5, 1.5});
    sfSprite_setPosition(menu->s_quit, posi);
}

void load_logo(menu_t *menu)
{
    sfIntRect pos = {0, 0, 300, 235};
    sfTexture *t_logo = sfTexture_createFromFile("assets/logo.png", &pos);

    menu->s_logo = sfSprite_create();
    sfSprite_setTexture(menu->s_logo, t_logo, sfFalse);
    free(t_logo);
    sfSprite_setOrigin(menu->s_logo, (sfVector2f) {150, 117.5});
    sfSprite_setPosition(menu->s_logo, (sfVector2f) {960, 200});
}

void load_menu(menu_t *menu)
{
    load_button_quit(menu);
    load_button_start(menu);
    load_logo(menu);
}