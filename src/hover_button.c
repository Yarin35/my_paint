/*
** EPITECH PROJECT, 2023
** hover_button
** File description:
** button
*/

#include <unistd.h>
#include "../include/my.h"
#include "../include/structure.h"

void if_not_click_then(general_t *all, button_t **buttons
                    , framebuffer_t *framebuffer,  create_text_t *text_k)
{
    hover_button_3(all, buttons, framebuffer);
    hover_button_2(all, buttons, framebuffer);
    hover_button_1(all, buttons, framebuffer, text_k);
    if (buttons[26]->is_hover(buttons[26], MouseMove) == HOVER) {
        sfRectangleShape_setFillColor(buttons[26]->rect, sfWhite);
    } else {
        sfRectangleShape_setFillColor(buttons[26]->rect, sfBlack);
    }
    if (buttons[27]->is_hover(buttons[27], MouseMove) == HOVER) {
        sfRectangleShape_setFillColor(buttons[27]->rect, sfWhite);
    } else {
        sfRectangleShape_setFillColor(buttons[27]->rect, sfBlack);
    }
    if (buttons[28]->is_hover(buttons[28], MouseMove) == HOVER) {
        sfRectangleShape_setFillColor(buttons[28]->rect, sfWhite);
    } else {
        sfRectangleShape_setFillColor(buttons[28]->rect, sfBlack);
    }
}

void hover_button_1(general_t *all, button_t **buttons
                    , framebuffer_t *framebuffer,  create_text_t *text_k)
{
    if (buttons[0]->is_hover(buttons[0], MouseMove) == HOVER) {
        color_button_1(all, buttons);
        STATUS = SHOW_MENU_FILE;
    } else {
    if (STATUS != SHOW_MENU_TOOLS && STATUS != SHOW_MENU_HELP &&
            STATUS != SHOW_HELP && STATUS != SHOW_ABOUT && STATUS != PENCIL
            && STATUS != ERASER && STATUS != OPEN && STATUS != SAVE) {
            STATUS = HIDE_MENU ;
            sfRectangleShape_setFillColor(buttons[0]->rect, sfBlack);
            }
    }
}

void hover_button_2(general_t *all, button_t **buttons
                    , framebuffer_t *framebuffer)
{
    if (buttons[1]->is_hover(buttons[1], MouseMove) == HOVER
        && STATUS != SHOW_MENU_HELP) {
        color_button_2(all, buttons);
        STATUS = SHOW_MENU_TOOLS;
    } else {
        if (STATUS != SHOW_MENU_HELP && STATUS != SHOW_HELP
            && STATUS != SHOW_ABOUT && STATUS != PENCIL && STATUS != ERASER
            && STATUS != OPEN && STATUS != SAVE) {
            STATUS = HIDE_MENU;
            sfRectangleShape_setFillColor(buttons[1]->rect, sfBlack);
        }
    }
}

void hover_button_3(general_t *all, button_t **buttons
                    , framebuffer_t *framebuffer)
{
    if (buttons[2]->is_hover(buttons[2], MouseMove) == HOVER) {
        color_button_3(all, buttons);
        STATUS = SHOW_MENU_HELP;

    } else {
        if (STATUS != SHOW_HELP && STATUS != SHOW_ABOUT && STATUS != PENCIL
            && STATUS != ERASER && STATUS != OPEN && STATUS != SAVE) {
            STATUS = HIDE_MENU;
            sfRectangleShape_setFillColor(buttons[2]->rect, sfBlack);
        }
    }
}
