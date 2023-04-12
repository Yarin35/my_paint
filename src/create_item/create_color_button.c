/*
** EPITECH PROJECT, 2023
** color_button
** File description:
** but
*/

#include <unistd.h>
#include "../../include/my.h"
#include "../../include/structure.h"

void color_button_3(general_t *all, button_t **buttons)
{
    sfRectangleShape_setFillColor(buttons[2]->rect, sfWhite);
    for (int i = 8; i != 10; i++)
        sfRectangleShape_setFillColor(buttons[i]->rect, sfBlack);
    if (buttons[8]->is_hover(buttons[8], &all->sett.event.mouseMove) == HOVER) {
        sfRectangleShape_setFillColor(buttons[2]->rect, sfBlack);
        sfRectangleShape_setFillColor(buttons[8]->rect, sfWhite);
        sfRectangleShape_setFillColor(buttons[9]->rect, sfBlack);
    }
    if (buttons[9]->is_hover(buttons[9], &all->sett.event.mouseMove) == HOVER) {
        sfRectangleShape_setFillColor(buttons[2]->rect, sfBlack);
        sfRectangleShape_setFillColor(buttons[8]->rect, sfBlack);
        sfRectangleShape_setFillColor(buttons[9]->rect, sfWhite);
    }
}

void color_button_2(general_t *all, button_t **buttons)
{
    sfRectangleShape_setFillColor(buttons[1]->rect, sfWhite);
    for (int i = 6; i != 8; i++)
        sfRectangleShape_setFillColor(buttons[i]->rect, sfBlack);
    if (buttons[6]->is_hover(buttons[6], &all->sett.event.mouseMove) == HOVER) {
        sfRectangleShape_setFillColor(buttons[1]->rect, sfBlack);
        sfRectangleShape_setFillColor(buttons[6]->rect, sfWhite);
        sfRectangleShape_setFillColor(buttons[7]->rect, sfBlack);
    }
    if (buttons[7]->is_hover(buttons[7], &all->sett.event.mouseMove) == HOVER) {
        sfRectangleShape_setFillColor(buttons[1]->rect, sfBlack);
        sfRectangleShape_setFillColor(buttons[6]->rect, sfBlack);
        sfRectangleShape_setFillColor(buttons[7]->rect, sfWhite);
    }
}

void color_button_1(general_t *all, button_t **buttons)
{
    sfRectangleShape_setFillColor(buttons[0]->rect, sfWhite);
    for (int i = 3; i != 6; i++)
        sfRectangleShape_setFillColor(buttons[i]->rect, sfBlack);
    if (buttons[3]->is_hover(buttons[3], &all->sett.event.mouseMove) == HOVER) {
        sfRectangleShape_setFillColor(buttons[0]->rect, sfBlack);
        sfRectangleShape_setFillColor(buttons[3]->rect, sfWhite);
        sfRectangleShape_setFillColor(buttons[4]->rect, sfBlack);
    }
    if (buttons[4]->is_hover(buttons[4], &all->sett.event.mouseMove) == HOVER) {
        sfRectangleShape_setFillColor(buttons[0]->rect, sfBlack);
        sfRectangleShape_setFillColor(buttons[3]->rect, sfBlack);
        sfRectangleShape_setFillColor(buttons[4]->rect, sfWhite);
        sfRectangleShape_setFillColor(buttons[5]->rect, sfBlack);
    }
    if (buttons[5]->is_hover(buttons[5], &all->sett.event.mouseMove) == HOVER) {
        sfRectangleShape_setFillColor(buttons[0]->rect, sfBlack);
        sfRectangleShape_setFillColor(buttons[3]->rect, sfBlack);
        sfRectangleShape_setFillColor(buttons[4]->rect, sfBlack);
        sfRectangleShape_setFillColor(buttons[5]->rect, sfWhite);
    }
}
