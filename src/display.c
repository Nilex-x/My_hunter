/*
** EPITECH PROJECT, 2020
** display
** File description:
** display contain of game
*/

#include "my.h"

void display_menu(window_t *window, menu_t *menu)
{
    sfRenderWindow_setMouseCursorVisible(window->window, 1);
    sfSprite_setPosition(menu->s_logo, (sfVector2f) {960, 200});
    sfRenderWindow_drawSprite(window->window, window->s_back, NULL);
    sfRenderWindow_drawSprite(window->window, menu->s_play, NULL);
    sfRenderWindow_drawText(window->window, menu->t_play, NULL);
    sfRenderWindow_drawSprite(window->window, menu->s_quit, NULL);
    sfRenderWindow_drawText(window->window, menu->t_quit, NULL);
    sfRenderWindow_drawSprite(window->window, menu->s_logo, NULL);
}

void display_pause(window_t *window, pause_t * pause, menu_t *menu)
{
    sfRenderWindow_setMouseCursorVisible(window->window, 1);
    sfSprite_setPosition(menu->s_logo, (sfVector2f) {960, 330});
    sfRenderWindow_drawSprite(window->window, window->s_back, NULL);
    sfRenderWindow_drawSprite(window->window, pause->s_pause, NULL);
    sfRenderWindow_drawSprite(window->window, pause->s_resume, NULL);
    sfRenderWindow_drawText(window->window, pause->t_resume, NULL);
    sfRenderWindow_drawSprite(window->window, pause->s_quit, NULL);
    sfRenderWindow_drawText(window->window, pause->t_quit, NULL);
    sfRenderWindow_drawSprite(window->window, menu->s_logo, NULL);
    sfRenderWindow_drawSprite(window->window, pause->s_menu, NULL);
    sfRenderWindow_drawText(window->window, pause->t_menu, NULL);
}

void display_game(window_t *window, duck_t *duck)
{
    sfRenderWindow_setMouseCursorVisible(window->window, 0);
    sfSprite_setPosition(window->s_crosshair, \
    (sfVector2f) {window->x_cross, window->y_cross});
    sfRenderWindow_drawSprite(window->window, window->s_back, NULL);
    animate_duck(duck, window);
    sfText_setString(window->t_score, my_int_to_str(window->score));
    sfRenderWindow_drawSprite(window->window, window->s_life, NULL);
    sfRenderWindow_drawText(window->window, window->level, NULL);
    sfRenderWindow_drawText(window->window, window->level_nv, NULL);
    sfRenderWindow_drawText(window->window, window->t_highscore, NULL);
    sfRenderWindow_drawText(window->window, window->t_score, NULL);
    sfRenderWindow_drawText(window->window, window->title_high, NULL);
    sfRenderWindow_drawText(window->window, window->title_score, NULL);
    sfRenderWindow_drawSprite(window->window, window->s_bullet, NULL);
    sfRenderWindow_drawSprite(window->window, window->s_crosshair, NULL);
}