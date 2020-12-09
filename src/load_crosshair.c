/*
** EPITECH PROJECT, 2020
** load_crosshair
** File description:
** load crosshair in sprite
*/

#include "my.h"

void load_crosshair(window_t *window)
{
    sfIntRect pos = {0, 0, 140, 140};
    sfTexture *t_cross = sfTexture_createFromFile("assets/crosshair.png", &pos);

    window->s_crosshair = sfSprite_create();
    sfSprite_setTexture(window->s_crosshair, t_cross, sfFalse);
    free(t_cross);
    sfSprite_setOrigin(window->s_crosshair, (sfVector2f) {70, 70});
    sfSprite_setScale(window->s_crosshair, (sfVector2f) {0.3, 0.3});
}

void load_level(window_t *window)
{
    sfFont *font = sfFont_createFromFile("assets/Games.ttf");

    window->level = sfText_create();
    window->level_nv = sfText_create();
    sfText_setString(window->level, "Level : ");
    sfText_setString(window->level_nv, my_int_to_str(window->lvl));
    sfText_setFont(window->level, font);
    sfText_setFont(window->level_nv, font);
    sfText_setStyle(window->level, sfTextBold);
    sfText_setStyle(window->level_nv, sfTextBold);
    sfText_setColor(window->level, sfBlack);
    sfText_setColor(window->level_nv, sfRed);
    sfText_setScale(window->level, (sfVector2f) {1.5, 1.5});
    sfText_setScale(window->level_nv, (sfVector2f) {1.5, 1.5});
    sfText_setPosition(window->level, (sfVector2f) {800, 950});
    sfText_setPosition(window->level_nv, (sfVector2f) {980, 950});
}

void load_bullet(window_t *window)
{
    sfTexture *t_sprite;

    window->s_bullet = sfSprite_create();
    window->r_bullet = (sfIntRect) {0, 0, 160, 32};
    t_sprite = sfTexture_createFromFile("assets/bullet.png", &window->r_bullet);
    sfSprite_setTexture(window->s_bullet, t_sprite, sfFalse);
    free(t_sprite);
    sfSprite_setOrigin(window->s_bullet, (sfVector2f) {32/2, 32/2});
    sfSprite_setPosition(window->s_bullet, (sfVector2f) {370, 970});
    sfSprite_setScale(window->s_bullet, (sfVector2f) {2.5, 2.5});
    window->bullet = 5;
    window->fail = 0;
}

void update_bullet(window_t *window)
{
    sfTexture *t_sprite;

    window->r_bullet.left += 31;
    window->bullet--;
    t_sprite = sfTexture_createFromFile("assets/bullet.png", &window->r_bullet);
    sfSprite_setTexture(window->s_bullet, t_sprite, sfFalse);
    window->fail = 0;
}