/*
** EPITECH PROJECT, 2023
** state
** File description:
** button
*/

#include <unistd.h>
#include "../include/my.h"
#include "../include/structure.h"

button_state_t pressed_or_released(button_t* button, sfMouseButtonEvent* event)
{
    if (event->type == sfEvtMouseButtonPressed)
        return PRESSED;
    else {
        if (event->type == sfEvtMouseButtonReleased)
            return RELEASED;
    }
}

button_state_t is_clicked(button_t* button, sfMouseButtonEvent* event)
{
    sfFloatRect rect_bounds = sfRectangleShape_getGlobalBounds(button->rect);
    if (sfFloatRect_contains(&rect_bounds, event->x, event->y)) {
        if (event->button == sfMouseLeft) {
            return pressed_or_released(button, event);
        }
    }
    return NONE;
}

button_state_t is_hover(button_t* button, sfMouseMoveEvent* event)
{
    sfFloatRect rect_bounds = sfRectangleShape_getGlobalBounds(button->rect);
    if (sfFloatRect_contains(&rect_bounds, event->x, event->y)) {
        return HOVER;
    } else {
        return NONE;
    }
}
