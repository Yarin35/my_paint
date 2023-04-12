/*
** EPITECH PROJECT, 2023
** color_button
** File description:
** but
*/

#include <unistd.h>
#include "../../include/my.h"
#include "../../include/structure.h"

void set_pos_after(general_t *all, button_t **buttons
                        , create_text_t *text_k)
{
    sfRect_setPos(buttons[12]->rect, (sfVector2f){10, 300});
    sfRect_setPos(buttons[13]->rect, (sfVector2f){55, 300});
    sfRect_setPos(buttons[14]->rect, (sfVector2f){10, 345});
    sfRect_setPos(buttons[15]->rect, (sfVector2f){55, 345});
    sfRect_setPos(buttons[16]->rect, (sfVector2f){10, 390});
    sfRect_setPos(buttons[17]->rect, (sfVector2f){55, 390});
    sfRect_setPos(buttons[18]->rect, (sfVector2f){10, 435});
    sfRect_setPos(buttons[19]->rect, (sfVector2f){55, 435});
    sfRect_setPos(buttons[29]->rect, (sfVector2f){36, 630});
    sfRect_setPos(buttons[30]->rect, (sfVector2f){34, 655});
    sfRect_setPos(buttons[31]->rect, (sfVector2f){32, 680});
}

void if_pencil_eraser(general_t *all, button_t **buttons
                        , create_text_t *text_k)
{
    print_circle(all);
    if (STATUS == PENCIL) {
        for (int i = 35; i != 38; i++)
            sfRect_setPos(buttons[i]->rect, (sfVector2f){10000, 10000});
        set_pos_after(all, buttons, text_k);
        sfRenderWindow_drawRectangleShape(WIN, buttons[20]->rect, 0);
        sfRenderWindow_drawRectangleShape(WIN, buttons[21]->rect, 0);
        sfRenderWindow_drawRectangleShape(WIN, buttons[22]->rect, 0);
        sfRenderWindow_drawRectangleShape(WIN, buttons[29]->rect, 0);
        sfRenderWindow_drawRectangleShape(WIN, buttons[30]->rect, 0);
        sfRenderWindow_drawRectangleShape(WIN, buttons[31]->rect, 0);
        sfRenderWindow_drawText(WIN, text_k[13].text, 0);
    }
    if_eraser(all, buttons, text_k);
}

void if_eraser(general_t *all, button_t **buttons, create_text_t *text_k)
{
    if (STATUS == ERASER) {
        for (int i = 12; i != 20; i++)
            sfRect_setPos(buttons[i]->rect, (sfVector2f){10000, 10000});
        for (int i = 29; i != 31; i++)
            sfRect_setPos(buttons[i]->rect, (sfVector2f){10000, 10000});
    sfRect_setPos(buttons[35]->rect, (sfVector2f) {35, 630});
    sfRect_setPos(buttons[36]->rect, (sfVector2f) {33, 680});
    sfRect_setPos(buttons[37]->rect, (sfVector2f) {30, 730});
    sfRenderWindow_drawRectangleShape(WIN, buttons[23]->rect, 0);
    sfRenderWindow_drawRectangleShape(WIN, buttons[24]->rect, 0);
    sfRenderWindow_drawRectangleShape(WIN, buttons[25]->rect, 0);
    for (int i = 0; i != 3; i++) {
            sfRenderWindow_drawCircleShape(WIN, all->circle[i].circ, NULL);
    }
    sfRenderWindow_drawText(WIN, text_k[14].text, 0);
    }
}
