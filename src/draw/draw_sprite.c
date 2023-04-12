/*
** EPITECH PROJECT, 2023
** color_button
** File description:
** but
*/

#include <unistd.h>
#include "../../include/my.h"
#include "../../include/structure.h"

void if_status_save(general_t *all, button_t **buttons, create_text_t *text_k)
{
    if (STATUS == SAVE) {
        sfRenderWindow_drawRectangleShape(WIN , buttons[26]->rect, 0);
        sfRenderWindow_drawText(WIN, text_k[16].text, 0);
        sfRenderWindow_drawRectangleShape(WIN , buttons[27]->rect, 0);
        sfRenderWindow_drawText(WIN, text_k[17].text, 0);
        sfRenderWindow_drawRectangleShape(WIN , buttons[28]->rect, 0);
        sfRenderWindow_drawText(WIN, text_k[18].text, 0);
    }
}

void draw_menu_file(general_t *all, button_t **buttons, create_text_t *text_k)
{
    for (int i = 3; i != 6; i++)
        sfRect_setPos(buttons[i]->rect, (sfVector2f){10000, 10000});
    if (STATUS == SHOW_MENU_FILE) {
        sfRectangleShape_setSize(buttons[0]->rect, (sfVector2f) {80, 100});
        sfRect_setPos(buttons[3]->rect, (sfVector2f){126, 50});
        sfRect_setPos(buttons[4]->rect, (sfVector2f){126, 76});
        sfRect_setPos(buttons[5]->rect, (sfVector2f){126, 102});
        for (int i = 3; i != 6; i++) {
            sfRenderWindow_drawRectangleShape(WIN , buttons[i]->rect, 0);
            sfRenderWindow_drawText(WIN, text_k[i].text, 0);
        }
    }
    if (STATUS == HIDE_MENU || STATUS == SAVE) {
        for (int i = 3; i != 6; i++)
            sfRect_setPos(buttons[i]->rect, (sfVector2f){10000, 10000});
        sfRectangleShape_setSize(buttons[0]->rect, (sfVector2f) {80, 23});
    }
    if_status_save(all, buttons, text_k);
}

void draw_menu_tools(general_t *all, button_t **buttons, create_text_t *text_k)
{
    for (int i = 6; i != 8; i++)
        sfRect_setPos(buttons[i]->rect, (sfVector2f){10000, 10000});
    for (int i = 12; i != 20; i++)
        sfRect_setPos(buttons[i]->rect, (sfVector2f){10000, 10000});
    if (STATUS == SHOW_MENU_TOOLS) {
        sfRectangleShape_setSize(buttons[1]->rect, (sfVector2f) {80, 75});
        sfRect_setPos(buttons[6]->rect, (sfVector2f){250, 50});
        sfRect_setPos(buttons[7]->rect, (sfVector2f){250, 76});
        for (int i = 6; i != 8; i++)
            sfRenderWindow_drawRectangleShape(WIN , buttons[i]->rect, 0);
        for (int i = 6; i != 8; i++)
            sfRenderWindow_drawText(WIN, text_k[i].text, 0);
    }
    if (STATUS == HIDE_MENU || STATUS == PENCIL || STATUS == ERASER) {
        for (int i = 6; i != 8; i++)
            sfRect_setPos(buttons[i]->rect, (sfVector2f){10000, 10000});
        sfRectangleShape_setSize(buttons[1]->rect, (sfVector2f) {80, 23});
    }
    if_pencil_eraser(all, buttons, text_k);
}

void draw_menu_help(general_t *all, button_t **buttons, create_text_t *text_k)
{
    for (int i = 8; i != 10; i++)
        sfRect_setPos(buttons[i]->rect, (sfVector2f){10000, 10000});
    if (STATUS == SHOW_MENU_HELP) {
        sfRectangleShape_setSize(buttons[2]->rect, (sfVector2f) {80, 75});
        sfRect_setPos(buttons[8]->rect, (sfVector2f){374, 50});
        sfRect_setPos(buttons[9]->rect, (sfVector2f){374, 76});
        for (int i = 8; i != 10; i++)
            sfRenderWindow_drawRectangleShape(WIN , buttons[i]->rect, 0);
        for (int i = 8; i != 10; i++)
            sfRenderWindow_drawText(WIN, text_k[i].text, 0);
    }
    if (STATUS == HIDE_MENU) {
        for (int i = 8; i != 10; i++)
            sfRect_setPos(buttons[i]->rect, (sfVector2f){10000, 10000});
        sfRectangleShape_setSize(buttons[2]->rect, (sfVector2f) {80, 23});
    }
    draw_help_about(all, buttons, text_k);
}

void draw_cursor(general_t *all)
{
    if (STATUS == HIDE_MENU || STATUS == SHOW_HELP || STATUS == SHOW_ABOUT
        && STATUS != PENCIL || STATUS == OPEN || STATUS == SAVE)
        sfRenderWindow_drawSprite(WIN, all->cursor[0].cursor, NULL);
    if (STATUS == SHOW_MENU_FILE || STATUS == SHOW_MENU_HELP
        || STATUS == SHOW_MENU_TOOLS && STATUS != PENCIL)
        sfRenderWindow_drawSprite(WIN, all->cursor[1].cursor, NULL);
    if (STATUS == PENCIL)
        sfRenderWindow_drawSprite(WIN, all->cursor[2].cursor, NULL);
    if (STATUS == ERASER)
        sfRenderWindow_drawSprite(WIN, all->cursor[3].cursor, NULL);
}
