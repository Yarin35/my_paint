/*
** EPITECH PROJECT, 2023
** main
** File description:
** touch
*/

#include <unistd.h>
#include "../include/my.h"
#include "../include/structure.h"
#include "../lib/my/prototypes.h"

void param_window(general_t *all)
{
    all->sett.mode.bitsPerPixel = 32;
    all->sett.mode.height = 1080;
    all->sett.mode.width = 1920;
    WIN = sfRenderWindow_create(MOD,"my_paint", sfClose | sfResize, 0);
}

void init_all(general_t *all)
{
    param_window(all);
    init_item_menu(all);
}

void get_login(char **env, general_t *all)
{
    char **env_line = NULL;
    for (int i = 0; env[i]; i++)  {
        env_line = my_str_to_word_array_2(env[i]);
        if (my_strcmp(env_line[0], "USER") == 0)
            all->login = env_line[1];

    }
}

int main(int argc, char *argv[], char **env)
{
    general_t all;
    init_sprite_t *init_sprite = malloc(sizeof(init_sprite_t));
    if (argc == 1) {
        get_login(env, &all);
        init_all(&all);
        open_menu(&all);
    } else {
        return 84;
    }
}
