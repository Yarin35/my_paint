/*
** EPITECH PROJECT, 2023
** save
** File description:
** save
*/

#include <unistd.h>
#include "../include/my.h"
#include "../include/structure.h"

void save_file(general_t *all, button_t **buttons, framebuffer_t *framebuffer)
{
    if (buttons[26]->is_clicked(buttons[26], MouseButton) == PRESSED) {
            framebuffer->option = 1;
            framebuffer->filetype = 1;
            my_file_explorer(framebuffer, &all->sett.event);
            sfRenderWindow_clear(WIN, sfWhite);
            sfRenderWindow_display(WIN);
            free(framebuffer->name);
            framebuffer->name = my_calloc(1, 10);
        }
        if (buttons[27]->is_clicked(buttons[27], MouseButton) == PRESSED) {
            framebuffer->option = 1;
            framebuffer->filetype = 2;
            my_file_explorer(framebuffer, &all->sett.event);
            sfRenderWindow_clear(WIN, sfWhite);
            sfRenderWindow_display(WIN);
            free(framebuffer->name);
            framebuffer->name = my_calloc(1, 10);
        }
        if_bmp(all, buttons, framebuffer);
}

void if_bmp(general_t *all, button_t **buttons, framebuffer_t *framebuffer)
{
    if (buttons[28]->is_clicked(buttons[28], MouseButton) == PRESSED) {
            framebuffer->option = 1;
            framebuffer->filetype = 3;
            my_file_explorer(framebuffer, &all->sett.event);
            sfRenderWindow_clear(WIN, sfWhite);
            sfRenderWindow_display(WIN);
            free(framebuffer->name);
            framebuffer->name = my_calloc(1, 10);
        }
}

void change_color_save(general_t *all, button_t **buttons)
{
    if (STATUS != SAVE) {
        for (int i = 26; i != 29; i++)
            sfRect_setPos(buttons[i]->rect, (sfVector2f){10000, 10000});
    } else {
        sfRect_setPos(buttons[26]->rect, (sfVector2f){6, 400});
        sfRect_setPos(buttons[27]->rect, (sfVector2f){6, 450});
        sfRect_setPos(buttons[28]->rect, (sfVector2f){6, 500});
    }
}
