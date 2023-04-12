/*
** EPITECH PROJECT, 2023
** open_paint
** File description:
** open
*/

#include <unistd.h>
#include "../include/my.h"
#include "../include/structure.h"

void manage_cricle(button_t **buttons, framebuffer_t *framebuffer
                        , general_t *all)
{
    if (buttons[35]->is_clicked(buttons[35], MouseButton) == PRESSED) {
        framebuffer->state = 3;
        framebuffer->size = 20;
    }
    if (buttons[36]->is_clicked(buttons[36], MouseButton) == PRESSED) {
        framebuffer->state = 3;
        framebuffer->size = 25;
    }
    if (buttons[37]->is_clicked(buttons[37], MouseButton) == PRESSED) {
        framebuffer->state = 3;
        framebuffer->size = 30;
    }
}

void manage_rectangle(button_t **buttons, framebuffer_t *framebuffer
                        , general_t *all)
{
    if (buttons[29]->is_clicked(buttons[29], MouseButton) == PRESSED) {
        framebuffer->state = 2;
        framebuffer->size = 5;
    }
    if (buttons[30]->is_clicked(buttons[30], MouseButton) == PRESSED) {
        framebuffer->state = 2;
        framebuffer->size = 10;
    }
    if (buttons[31]->is_clicked(buttons[31], MouseButton) == PRESSED) {
        framebuffer->state = 2;
        framebuffer->size = 15;
    }
    manage_cricle(buttons, framebuffer, all);
}

void manage_color_button(button_t **buttons, framebuffer_t *framebuffer,
                        general_t *all)
{
    if (buttons[12]->is_clicked(buttons[12], MouseButton) == PRESSED)
        framebuffer->color = sfRed;
    if (buttons[13]->is_clicked(buttons[13], MouseButton) == PRESSED)
        framebuffer->color = sfBlue;
    if (buttons[14]->is_clicked(buttons[14], MouseButton) == PRESSED)
        framebuffer->color = sfGreen;
    if (buttons[15]->is_clicked(buttons[15], MouseButton) == PRESSED)
        framebuffer->color = sfYellow;
    if (buttons[16]->is_clicked(buttons[16], MouseButton) == PRESSED)
        framebuffer->color = sfMagenta;
    if (buttons[17]->is_clicked(buttons[17], MouseButton) == PRESSED)
        framebuffer->color = sfCyan;
    if (buttons[18]->is_clicked(buttons[18], MouseButton) == PRESSED)
        framebuffer->color = sfBlack;
    if (buttons[19]->is_clicked(buttons[19], MouseButton) == PRESSED)
        framebuffer->color = sfWhite;
}

void manage_pencil(general_t *all, button_t **buttons
                , framebuffer_t *framebuffer)
{
    if (buttons[6]->is_clicked(buttons[6], MouseButton) == PRESSED) {
        framebuffer->False = true;
        framebuffer->color = sfBlack;
        all->status = PENCIL;
        framebuffer->size = 5;
        framebuffer->opt = 1;
    }
    if (buttons[7]->is_clicked(buttons[7], MouseButton) == PRESSED) {
        framebuffer->False = true;
        framebuffer->color = sfWhite;
        all->status = ERASER;
        framebuffer->size = 5;
        framebuffer->opt = 2;
    }
}

void manage_all(general_t *all, button_t **buttons
                , framebuffer_t *framebuffer,  create_text_t *text_k)
{
    manage_pencil(all, buttons, framebuffer);
    manage_color_button(buttons, framebuffer, all);
    manage_size_button(buttons, framebuffer, all);
    manage_rectangle(buttons, framebuffer, all);
    if (STATUS == PENCIL || STATUS == ERASER || STATUS == NEW)
            while (sfMouse_isButtonPressed(sfMouseLeft)) {
                draw_with_pencil(all, framebuffer, text_k, buttons);
    }
}
