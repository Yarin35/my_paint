/*
** EPITECH PROJECT, 2023
** open_menu
** File description:
** menu
*/

#include <unistd.h>
#include "../include/my.h"
#include "../include/structure.h"

void destroy(general_t *all)
{
    for (int i = 0; i != 3; i++) {
        sfSprite_destroy(all->init_sprite[i].menu);
        sfTexture_destroy(all->init_sprite[i].texture_menu);
    }
}

void draw_sprite(general_t *all)
{
    sfRenderWindow_drawSprite(all->sett.window ,all->init_sprite[2].menu, 0);
    sfRenderWindow_drawSprite(all->sett.window ,all->init_sprite[1].menu, 0);
    sfRenderWindow_drawSprite(all->sett.window ,all->init_sprite[0].menu, 0);
}

void click_handling(general_t *all)
{
    sfVector2f scale = {1.25, 1.25};
    sfVector2f pos = {775, 575};
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->sett.window);
    if ((mouse.x >= 827 && mouse.x <= 1021)
        && (mouse.y >= 649 && mouse.y <= 693)){
        sfSprite_setScale(all->init_sprite[1].menu, scale);
        sfSprite_setPosition(all->init_sprite[1].menu, pos);
        if (all->sett.event.type == sfEvtMouseButtonPressed) {
            start_paint(all);
        }
    } else {
        sfSprite_setScale(all->init_sprite[1].menu, all->init_sprite[1].scale);
        sfSprite_setPosition(all->init_sprite[1].menu, all->init_sprite[1].pos);
    }
}

void if_close_window(general_t *all)
{
    if (all->sett.event.type == sfEvtClosed) {
        sfRenderWindow_close(all->sett.window);
    }
}

void open_menu(general_t *all)
{
    while (sfRenderWindow_isOpen(all->sett.window)) {
        while (sfRenderWindow_pollEvent(all->sett.window, &all->sett.event)) {
            if_close_window(all);
        }
        sfRenderWindow_clear(all->sett.window, sfWhite);
        draw_sprite(all);
        sfRenderWindow_display(all->sett.window);
        click_handling(all);
    }
    destroy(all);
    sfRenderWindow_destroy(all->sett.window);
}
