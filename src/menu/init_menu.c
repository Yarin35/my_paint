/*
** EPITECH PROJECT, 2023
** init structure
** File description:
** sprite
*/

#include <unistd.h>
#include "../../include/my.h"
#include "../../include/structure.h"

void init_sprite(general_t *all)
{
    all->init_sprite[0].menu = sfSprite_create();
    all->init_sprite[1].menu = sfSprite_create();
    all->init_sprite[2].menu = sfSprite_create();
    all->init_sprite[3].menu = sfSprite_create();
}

void init_texture(general_t *all)
{
    all->init_sprite[0].texture_menu
    = sfTexture_createFromFile("./content/title.png", 0);
    all->init_sprite[1].texture_menu
    = sfTexture_createFromFile("./content/open.png", 0);
    all->init_sprite[2].texture_menu
    = sfTexture_createFromFile("./content/background.jpg", 0);
    all->init_sprite[3].texture_menu
    = sfTexture_createFromFile("./content/photoshop.png", 0);
}

void init_position(general_t *all)
{
    all->init_sprite[0].pos.x = 500;
    all->init_sprite[0].pos.y = 100;
    all->init_sprite[1].pos.x = 800;
    all->init_sprite[1].pos.y = 600;
    all->init_sprite[3].pos.x = -19;
    all->init_sprite[3].pos.y = -23;
}

void init_scale(general_t *all)
{
    all->init_sprite[0].scale.x = 2;
    all->init_sprite[0].scale.y = 2;
    all->init_sprite[1].scale.x = 1;
    all->init_sprite[1].scale.y = 1;
    all->init_sprite[3].scale.x = 0.25;
    all->init_sprite[3].scale.y = 0.25;
}

void init_item_menu(general_t *all)
{
    all->init_sprite = malloc(sizeof(init_sprite_t) * 4);

    init_sprite(all);
    init_texture(all);
    init_position(all);
    init_scale(all);
    set_item_menu(all->init_sprite);
}
