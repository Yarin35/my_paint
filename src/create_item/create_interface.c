/*
** EPITECH PROJECT, 2023
** init structure
** File description:
** sprite
*/

#include <unistd.h>
#include "../../include/my.h"
#include "../../include/structure.h"

void init_item(general_t *all)
{
    all->interface = malloc(sizeof(interface_t) * 4);
    all->interface[0].pos = (sfVector2f){0, 0};
    all->interface[2].pos = (sfVector2f){190, 170};
    all->interface[0].size = (sfVector2f){1920, 70};
    all->interface[1].size = (sfVector2f){90, 1080};
    all->interface[2].size = (sfVector2f) {1632, 739};
    all->interface[0].top = sfRectangleShape_create();
    all->interface[1].top = sfRectangleShape_create();
    all->interface[2].top = sfRectangleShape_create();
    all->interface[3].top = sfRectangleShape_create();
    set_item(all);
}

void set_item(general_t *all)
{
    sfColor grey = sfColor_fromRGB(112, 128, 144);
    sfRectangleShape_setSize(all->interface[0].top, all->interface[0].size);
    sfRectangleShape_setSize(all->interface[1].top, all->interface[1].size);
    sfRectangleShape_setSize(all->interface[2].top, all->interface[2].size);
    sfRectangleShape_setSize(all->interface[3].top, all->interface[2].size);
    sfRectangleShape_setOutlineColor(all->interface[0].top, sfBlack);
    sfRectangleShape_setOutlineColor(all->interface[1].top, sfBlack);
    sfRectangleShape_setOutlineColor(all->interface[3].top, sfBlack);
    sfRectangleShape_setFillColor(all->interface[3].top, sfTransparent);
    sfRectangleShape_setFillColor(all->interface[2].top, sfTransparent);
    sfRectangleShape_setOutlineColor(all->interface[2].top, RGB(3, 168, 244));
    sfRectangleShape_setFillColor(all->interface[0].top, grey);
    sfRectangleShape_setPosition(all->interface[0].top, all->interface->pos);
    sfRect_setPos(all->interface[1].top, all->interface->pos);
    sfRect_setPos(all->interface[2].top, all->interface[2].pos);
    sfRect_setPos(all->interface[3].top, all->interface[2].pos);
    sfRectangleShape_setOutlineThickness(all->interface[0].top, 2);
    sfRectangleShape_setOutlineThickness(all->interface[1].top, 2);
    sfRectangleShape_setOutlineThickness(all->interface[2].top, 98);
    sfRectangleShape_setOutlineThickness(all->interface[3].top, 2);
}
