/*
** EPITECH PROJECT, 2023
** set mneu
** File description:
** lenu
*/

#include <unistd.h>
#include "../../include/my.h"
#include "../../include/structure.h"

void set_texture(init_sprite_t *init_sprite)
{
    sfSprite_setTexture(init_sprite[0].menu, init_sprite[0].texture_menu, 1);
    sfSprite_setTexture(init_sprite[1].menu, init_sprite[1].texture_menu, 1);
    sfSprite_setTexture(init_sprite[2].menu, init_sprite[2].texture_menu, 1);
    sfSprite_setTexture(init_sprite[3].menu, init_sprite[3].texture_menu, 1);
}

void set_scale(init_sprite_t *init_sprite)
{
    sfSprite_setScale(init_sprite[0].menu, init_sprite[0].scale);
    sfSprite_setScale(init_sprite[1].menu, init_sprite[1].scale);
    sfSprite_setScale(init_sprite[3].menu, init_sprite[3].scale);
}

void set_position(init_sprite_t *init_sprite)
{
    sfSprite_setPosition(init_sprite[0].menu, init_sprite[0].pos);
    sfSprite_setPosition(init_sprite[1].menu, init_sprite[1].pos);
    sfSprite_setPosition(init_sprite[3].menu, init_sprite[3].pos);
}

void set_item_menu(init_sprite_t *init_sprite)
{
    set_texture(init_sprite);
    set_scale(init_sprite);
    set_position(init_sprite);
}
