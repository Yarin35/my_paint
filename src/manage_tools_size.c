/*
** EPITECH PROJECT, 2023
** open_paint
** File description:
** open
*/

#include <unistd.h>
#include "../include/my.h"
#include "../include/structure.h"

void manage_size_square(button_t **buttons, framebuffer_t *framebuffer
                        , general_t *all)
{
    if (buttons[23]->is_clicked(buttons[23], MouseButton) == PRESSED) {
        framebuffer->state = 1;
        framebuffer->size = 5;
    }
    if (buttons[24]->is_clicked(buttons[24], MouseButton) == PRESSED) {
        framebuffer->state = 1;
        framebuffer->size = 10;
    }
    if (buttons[25]->is_clicked(buttons[25], MouseButton) == PRESSED) {
        framebuffer->state = 1;
        framebuffer->size = 15;
    }
}

void manage_size_button(button_t **buttons, framebuffer_t *framebuffer
                        , general_t *all)
{
    if (buttons[20]->is_clicked(buttons[20], MouseButton) == PRESSED) {
        framebuffer->state = 1;
        framebuffer->size = 5;
    }
    if (buttons[21]->is_clicked(buttons[21], MouseButton) == PRESSED) {
        framebuffer->state = 1;
        framebuffer->size = 10;
    }
    if (buttons[22]->is_clicked(buttons[22], MouseButton) == PRESSED) {
        framebuffer->state = 1;
        framebuffer->size = 15;
    }
    manage_size_square(buttons, framebuffer, all);
}

void if_option_1(framebuffer_t *framebuffer, general_t *all)
{
    if (framebuffer->option == 1 || framebuffer->option == 2)
        my_file_explorer(framebuffer, &all->sett.event);
}
