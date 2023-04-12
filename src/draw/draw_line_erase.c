/*
** EPITECH PROJECT, 2023
** draw and erase
** File description:
** erase
*/

#include "../../include/my.h"
#include "../../include/structure.h"

void draw_with_pencil(general_t *all, framebuffer_t *framebuffer,
                        create_text_t *text_k, button_t **buttons)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(WIN);
    sfVector2f cursorPos4 = { (float)mouse_pos.x - 6, (float)mouse_pos.y - 39};
    sfSprite_setPosition(all->cursor[2].cursor, cursorPos4);
    sfSprite_setPosition(all->cursor[3].cursor, cursorPos4);
    if (framebuffer->state == 1)
        square_print(framebuffer, framebuffer->size, mouse_pos.x, mouse_pos.y);
    if (framebuffer->state == 2)
        my_put_rectangle(framebuffer, framebuffer->size,
        mouse_pos.x, mouse_pos.y);
    if (framebuffer->state == 3)
        my_put_circle(framebuffer, mouse_pos.x, mouse_pos.y);
    print_line_pencil(all);
    print_line_eraser(all);
    draw_all(all, buttons, text_k, framebuffer);
    sfRenderWindow_display(WIN);
}

void print_line_eraser(general_t *all)
{
    if (all->status == ERASER) {
        sfRenderWindow_drawSprite(WIN, all->cursor[3].cursor, NULL);
        sfRenderWindow_clear(all->sett.window, sfWhite);
    }
}

void print_line_pencil(general_t *all)
{
    if (all->status == PENCIL) {
        sfRenderWindow_drawSprite(WIN, all->cursor[2].cursor, NULL);
        sfRenderWindow_clear(all->sett.window, sfWhite);
    }
}
