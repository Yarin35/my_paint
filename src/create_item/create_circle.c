/*
** EPITECH PROJECT, 2023
** create_button
** File description:
** button
*/

#include <unistd.h>
#include "../../include/my.h"
#include "../../include/structure.h"

void create_first_circle(general_t *all)
{
    all->circle[0].circ = sfCircleShape_create();
    sfCircleShape_setRadius(all->circle[0].circ, 2);
    sfCircleShape_setOutlineThickness(all->circle[0].circ, 12);
    sfCircleShape_setOutlineColor(all->circle[0].circ, sfBlack);
    sfCircleShape_setFillColor(all->circle[0].circ, sfBlack);
    sfCircleShape_setOrigin(all->circle[0].circ, (V){10, 10});
    sfCircleShape_setPosition(all->circle[0].circ, (V){52, 650});
}

void print_circle(general_t *all)
{
    create_circle_t *circle = malloc(sizeof(create_circle_t) * 4);
    create_first_circle(all);
    all->circle[1].circ = sfCircleShape_create();
    sfCircleShape_setRadius(all->circle[1].circ, 2);
    sfCircleShape_setOutlineThickness(all->circle[1].circ, 15);
    sfCircleShape_setOutlineColor(all->circle[1].circ, sfBlack);
    sfCircleShape_setFillColor(all->circle[1].circ, sfBlack);
    sfCircleShape_setOrigin(all->circle[1].circ, (V){10, 10});
    sfCircleShape_setPosition(all->circle[1].circ, (V){52, 700});
    all->circle[2].circ = sfCircleShape_create();
    sfCircleShape_setRadius(all->circle[2].circ, 2);
    sfCircleShape_setOutlineThickness(all->circle[2].circ, 20);
    sfCircleShape_setOutlineColor(all->circle[2].circ, sfBlack);
    sfCircleShape_setFillColor(all->circle[2].circ, sfBlack);
    sfCircleShape_setOrigin(all->circle[2].circ, (V){10, 10});
    sfCircleShape_setPosition(all->circle[2].circ, (V){52, 750});
}
