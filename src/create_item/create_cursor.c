/*
** EPITECH PROJECT, 2023
** cursor
** File description:
** csur
*/

#include <unistd.h>
#include "../../include/my.h"
#include "../../include/structure.h"

void create_cursor(general_t *all)
{
    all->cursor = malloc(sizeof(cursor_t) * 4);
    all->cursor[0].texture = sfTexture_createFromFile(C"mouse_basic.png", 0);
    all->cursor[0].cursor = sfSprite_create();
    all->cursor[1].texture = sfTexture_createFromFile(C"hand_cursor.png", 0);
    all->cursor[1].cursor = sfSprite_create();
    all->cursor[2].texture = sfTexture_createFromFile(C"crayon.png", 0);
    all->cursor[2].cursor = sfSprite_create();
    all->cursor[3].texture = sfTexture_createFromFile(C"eraser.png", 0);
    all->cursor[3].cursor = sfSprite_create();
    sfRenderWindow_setMouseCursorVisible(WIN, sfFalse);
}

void set_cursor(general_t *all)
{
    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WIN);
    sfVector2f cursorPos = { (float)mousePos.x - 5, (float)mousePos.y };
    sfVector2f cursorPos2 = { (float)mousePos.x - 6, (float)mousePos.y - 39};
    sfVector2f cursorPos3 = { (float)mousePos.x - 6, (float)mousePos.y - 28};
    for (int i = 0; i != 2; i++) {
        sfSprite_setTexture(all->cursor[i].cursor, all->cursor[i].texture, 1);
        sfSprite_setScale(all->cursor[i].cursor, (sfVector2f) {0.05, 0.05});
        sfSprite_setPosition(all->cursor[i].cursor, cursorPos);
    }
    sfSprite_setTexture(all->cursor[2].cursor, all->cursor[2].texture, 0);
    sfSprite_setPosition(all->cursor[2].cursor, cursorPos2);
    sfSprite_setScale(all->cursor[2].cursor, (sfVector2f) {0.1, 0.1});
    sfSprite_setTexture(all->cursor[3].cursor, all->cursor[3].texture, 0);
    sfSprite_setPosition(all->cursor[3].cursor, cursorPos3);
    sfSprite_setScale(all->cursor[3].cursor, (sfVector2f) {0.1, 0.1});
}
