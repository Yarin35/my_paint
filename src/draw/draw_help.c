/*
** EPITECH PROJECT, 2023
** color_button
** File description:
** but
*/

#include <unistd.h>
#include "../../include/my.h"
#include "../../include/structure.h"

void draw_help_about(general_t *all, button_t **buttons, create_text_t *text_k)
{
    if (STATUS == SHOW_HELP) {
        sfRenderWindow_drawRectangleShape(WIN, buttons[10]->rect, 0);
        sfRectangleShape_setSize(buttons[2]->rect, (sfVector2f) {80, 23});
        sfRenderWindow_drawText(WIN, text_k[10].text, 0);
    }
    if (STATUS == SHOW_ABOUT) {
        sfRenderWindow_drawRectangleShape(WIN, buttons[11]->rect, 0);
        sfRectangleShape_setSize(buttons[2]->rect, (sfVector2f) {80, 23});
        sfRenderWindow_drawText(WIN, text_k[11].text, 0);
        sfRenderWindow_drawText(WIN, text_k[12].text, 0);
    }
}
