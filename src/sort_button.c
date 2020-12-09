/*
** EPITECH PROJECT, 2020
** sort_button
** File description:
** sort button
*/

#include "my.h"

int sort_button_menu(sfMouseButtonEvent mouse, menu_t *menu, window_t *window)
{
    sfVector2f pos_play = sfSprite_getPosition(menu->s_play);
    if ((mouse.x <= (int) pos_play.x + 100 &&
        mouse.x >= (int) pos_play.x - 100 &&
        mouse.y <= (int) pos_play.y + 30 &&
        mouse.y >= (int) pos_play.y - 30) &&
        mouse.button == sfMouseLeft)
        return (GAME);
    pos_play = sfSprite_getPosition(menu->s_quit);
    if ((mouse.x <= (int) pos_play.x + 100 &&
        mouse.x >= (int) pos_play.x - 100 &&
        mouse.y <= (int) pos_play.y + 30 &&
        mouse.y >= (int) pos_play.y - 30) &&
        mouse.button == sfMouseLeft)
        sfRenderWindow_close(window->window);
    return (MENU);
}

int sort_button_game(sfMouseButtonEvent mouse, duck_t *duck, window_t *window)
{
    sfVector2f pos_play = sfSprite_getPosition(duck->s_duck_1);
    if ((mouse.x <= (int) pos_play.x + 50 &&
        mouse.x >= (int) pos_play.x - 50 &&
        mouse.y <= (int) pos_play.y + 50 &&
        mouse.y >= (int) pos_play.y - 50) &&
        mouse.button == sfMouseLeft) {
            window->hit = 1;
    } else if (window->bullet > 0 && mouse.button == sfMouseLeft) {
        window->fail = 1;
    }
    if (mouse.button == sfKeyR) {
        window->bullet = 5;
    }
    if (mouse.button == sfKeyEscape)
        return (PAUSE);
    return (GAME);
}

void sort_button_pn(sfMouseButtonEvent mouse, pause_t *pause, window_t *window)
{
    sfVector2f pos_play = sfSprite_getPosition(pause->s_quit);
    if ((mouse.x <= (int) pos_play.x + 100 &&
        mouse.x >= (int) pos_play.x - 100 &&
        mouse.y <= (int) pos_play.y + 30 &&
        mouse.y >= (int) pos_play.y - 30) &&
        mouse.button == sfMouseLeft)
        sfRenderWindow_close(window->window);
}

int sort_button_p(sfMouseButtonEvent mouse, pause_t *pause, window_t *window)
{
    sfVector2f pos_play = sfSprite_getPosition(pause->s_resume);
    if ((mouse.x <= (int) pos_play.x + 100 &&
        mouse.x >= (int) pos_play.x - 100 &&
        mouse.y <= (int) pos_play.y + 30 &&
        mouse.y >= (int) pos_play.y - 30) &&
        mouse.button == sfMouseLeft)
        return (GAME);
    pos_play = sfSprite_getPosition(pause->s_menu);
    if ((mouse.x <= (int) pos_play.x + 100 &&
        mouse.x >= (int) pos_play.x - 100 &&
        mouse.y <= (int) pos_play.y + 30 &&
        mouse.y >= (int) pos_play.y - 30) &&
        mouse.button == sfMouseLeft)
        return (MENU);
    return (PAUSE);
}