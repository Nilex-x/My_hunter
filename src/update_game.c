/*
** EPITECH PROJECT, 2020
** update_game
** File description:
** update game
*/

#include "my.h"

void game_over(window_t *window)
{
    if (window->score < window->highscore) {
        my_puts("GAME OVER !!");
        my_putstr("Your score is ");
        my_put_nbr(window->score);
        my_putstr (" !!\nYou didn't beat the high score it's a ");
        my_put_nbr(window->highscore);
        my_putstr("\nYou can retry for beat the high score ");
        my_putstr("and be the best !!\n");
    } else if (window->score > window->highscore) {
        my_puts("WINNER !!");
        my_putstr("You score is ");
        my_put_nbr(window->score);
        my_putstr(" !!\nYou beat the high score congratulations !!\n");
        my_putstr("You beat him by ");
        my_put_nbr(window->score - window->highscore);
        my_putstr(" points !!\nthe new high score is ");
        my_put_nbr(window->score);
        my_putstr(" !!\nGood job you are the best\n");
    }
}

void write_biggest_score(window_t *window)
{
    char *score = my_int_to_str(window->score);
    size_t len = 0;
    FILE *fd = fopen(HIGH, "r+");

    my_strcat(score, "\n");
    if (fd == NULL)
        return;
    fwrite(score, 1, my_strlen(score) + 1, fd);
    fclose(fd);
    return;
}

void find_high_score(window_t *window)
{
    char *highscore_str = get_high_score();
    int high_score = my_atoi(highscore_str);

    if (window->score > high_score)
        write_biggest_score(window);
    else
        return;
}

char *get_high_score(void)
{
    char *score = NULL;
    size_t len = 0;
    FILE *fd = fopen(HIGH, "r");

    if (fd == NULL)
        return (NULL);
    if (getline(&score, &len, fd) == -1)
        return (NULL);
    score[my_strlen(score) - 1] = '\0';
    fclose(fd);
    return (score);
}

void reset_rect_bullet(window_t *window)
{
    sfTexture *t_sprite;

    window->r_bullet.left = 0;
    t_sprite = sfTexture_createFromFile("assets/bullet.png", &window->r_bullet);
    sfSprite_setTexture(window->s_bullet, t_sprite, sfFalse);
    free(t_sprite);
}