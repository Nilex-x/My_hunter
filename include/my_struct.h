/*
** EPITECH PROJECT, 2020
** my_struct
** File description:
** header
*/

#ifndef MY_STRUCT
#define MY_STRUCT

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Audio/Music.h>
#include <SFML/Graphics/Text.h>
#include <SFML/Graphics/Font.h>
#include <SFML/System/Clock.h>

typedef struct all_struct
{
    struct window *window_t;
    struct menu *menu_t;
    struct pause *pause_t;
    struct duck *duck_t;
}all_struct_t;

typedef struct window {
    sfRenderWindow *window;
    sfClock *clock;
    sfTime time;
    int i;
    int highscore;
    int lvl;
    int multi;
    int hit;
    int life;
    int score;
    int x_cross;
    int y_cross;
    int bullet;
    float seconds;
    int fail;
    sfSprite *s_bullet;
    sfIntRect r_bullet;
    sfText *level;
    sfText *level_nv;
    sfText *t_score;
    sfText *t_highscore;
    sfText *title_high;
    sfText*title_score;
    sfSprite *s_life;
    sfIntRect r_life;
    sfSprite *s_back;
    sfSprite *s_crosshair;
    sfMusic *m_menu;
    sfMusic *m_game;
    sfEvent event;
}window_t;

typedef struct menu {
    int t;
    sfSprite *s_menu;
    sfSprite *s_logo;
    sfSprite *s_play;
    sfSprite *s_quit;
    sfText *t_play;
    sfText *t_quit;
    sfIntRect r_play;
    sfIntRect r_quit;
}menu_t;

typedef struct pause {
    sfText *pause;
    sfSprite *s_pause;
    sfSprite *s_resume;
    sfSprite *s_quit;
    sfSprite *s_menu;
    sfText *t_resume;
    sfText *t_quit;
    sfText *t_menu;
}pause_t;

typedef struct duck {
    sfVector2f speed_duck;
    sfIntRect r_dog;
    sfSprite *s_dog;
    sfSprite *s_duck_1;
    sfIntRect r_duck_1;
    sfSprite *s_duck_2;
    sfIntRect r_duck_2;
    sfSprite *s_duck_3;
    sfIntRect r_duck_3;
}duck_t;

#endif /* !MY_STRUCT */