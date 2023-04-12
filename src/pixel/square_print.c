/*
** EPITECH PROJECT, 2023
** my_put_square.c
** File description:
** to put a square
*/

#include "../../include/pixel.h"

void square_print(framebuffer_t *buffer, int size, int x, int y)
{
    if (buffer->opt == 2)
        size *= 2;
    for (int i = x; i <= x + size; i ++)
        for (int j = y; j <= y + size; j ++)
            my_put_pixel(buffer, i, j, buffer->color);
    sfTexture_updateFromPixels(buffer->texture, buffer->pixel,
                                1920, 1080, 0, 0);
    return;
}
