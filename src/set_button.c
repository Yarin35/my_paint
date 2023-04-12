/*
** EPITECH PROJECT, 2023
** set_but
** File description:
** but
*/

#include <unistd.h>
#include "../include/my.h"
#include "../include/structure.h"

void set_pencil_eraser_first(button_t *button, sfVector2f position,
                            sfVector2f size, sfColor color_but)
{
    sfRectangleShape_setSize(button->rect, size);
    sfRectangleShape_setOutlineColor(button->rect, color_but);
    sfRectangleShape_setFillColor(button->rect, color_but);
    sfRectangleShape_setPosition(button->rect, position);
    sfRectangleShape_setOutlineThickness(button->rect, 3);
}

void set_button_color(button_t *button, sfVector2f position,
                    sfVector2f size, sfColor color_but)
{
    sfColor blue = sfColor_fromRGB(3, 168, 244);
    sfRectangleShape_setSize(button->rect, size);
    sfRectangleShape_setOutlineColor(button->rect, blue);
    sfRectangleShape_setFillColor(button->rect, color_but);
    sfRectangleShape_setPosition(button->rect, position);
    sfRectangleShape_setOutlineThickness(button->rect, 3);
}

void set_button(button_t *button, sfVector2f position, sfVector2f size)
{
    sfColor blue = sfColor_fromRGB(3, 168, 244);
    sfRectangleShape_setSize(button->rect, size);
    sfRectangleShape_setOutlineColor(button->rect, blue);
    sfRectangleShape_setFillColor(button->rect, sfBlack);
    sfRectangleShape_setPosition(button->rect, position);
    sfRectangleShape_setOutlineThickness(button->rect, 3);
}

void set_position_but_color(sfVector2f position, sfVector2f size
                            ,button_t *button)
{
    if (position.x == 55 && position.y == 300)
        set_button_color(button, position, size, sfBlue);
    if (position.x == 10 && position.y == 300)
        set_button_color(button, position, size, sfRed);
    if (position.x == 10 && position.y == 345)
        set_button_color(button, position, size, sfGreen);
    if (position.x == 55 && position.y == 345)
        set_button_color(button, position, size, sfYellow);
    if (position.x == 10 && position.y == 390)
        set_button_color(button, position, size, sfMagenta);
    if (position.x == 55 && position.y == 390)
        set_button_color(button, position, size, sfCyan);
    if (position.x == 10 && position.y == 435 || position.y == 622)
        set_button_color(button, position, size, sfBlack);
    if (position.x == 55 && position.y == 435)
        set_button_color(button, position, size, (sfColor){45, 178, 32, 1});
    if (position.y == 530 || position.y == 555 || position.y == 590
        || position.y == 630 || position.y == 655 || position.y == 680)
        set_pencil_eraser_first(button, position, size, sfBlack);
}
