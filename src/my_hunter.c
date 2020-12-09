/*
** EPITECH PROJECT, 2020
** my_hunter
** File description:
** main of my_hunter
*/

#include "my.h"

void get_and_set_events(window_t *window, all_struct_t *all)
{
    while (sfRenderWindow_pollEvent(window->window, &window->event)) {
        if (window->event.type == sfEvtClosed)
            sfRenderWindow_close(window->window);
        if (window->i == MENU)
            window->i = sort_button_menu(window->event.mouseButton, \
                                        all->menu_t, window);
        if (window->i == GAME) {
            window->x_cross = window->event.mouseMove.x;
            window->y_cross = window->event.mouseMove.y;
            window->i = sort_button_game(window->event.mouseButton, \
            all->duck_t, window);
        }
        if (window->i == PAUSE) {
            window->i = sort_button_p(window->event.mouseButton,
                                        all->pause_t, window);
            sort_button_pn(window->event.mouseButton, all->pause_t, window);
        }
    }
}

void display(window_t *window, menu_t *menu, pause_t *pause, duck_t *duck)
{
    sfRenderWindow_display(window->window);
    if (window->i == MENU)
        display_menu(window, menu);
    if (window->i == GAME)
        display_game(window, duck);
    if (window->i == PAUSE)
        display_pause(window, pause, menu);
}

void update_game(all_struct_t *all)
{
    if (all->window_t->life == 0) {
        game_over(all->window_t);
        sfRenderWindow_close(all->window_t->window);
        return;
    }
    if (all->window_t->score == (150 * all->window_t->lvl)) {
        all->window_t->multi += 5;
        all->window_t->lvl++;
        sfText_setString(all->window_t->level_nv, \
        my_int_to_str(all->window_t->lvl));
    }
    if (all->window_t->fail == 1) {
        update_bullet(all->window_t);
    }
}

void game_loop(all_struct_t *all)
{
    while (sfRenderWindow_isOpen(all->window_t->window)) {
        all->window_t->time = sfClock_getElapsedTime(all->window_t->clock);
        all->window_t->seconds = all->window_t->time.microseconds / 1000000.0;
        display(all->window_t, all->menu_t, all->pause_t, all->duck_t);
        get_and_set_events(all->window_t, all);
        update_game(all);
    }
}

int main(int ac, char **av)
{
    window_t window;
    pause_t pause;
    menu_t menu;
    duck_t duck;
    all_struct_t all;
    int verif = error_handing(ac, av);

    if (verif == 2)
        return (0);
    if (verif == 1)
        return (84);
    all.duck_t = &duck;
    all.menu_t = &menu;
    all.pause_t = &pause;
    all.window_t = &window;
    load_compoment(&window, &menu, &pause, &duck);
    game_loop(&all);
    sfRenderWindow_destroy(window.window);
    find_high_score(&window);
    return (0);
}