/*
** EPITECH PROJECT, 2023
** my_put_circle.c
** File description:
** my_put_circle.c
*/

#include "../../include/pixel.h"
#include <math.h>


static void check(framebuffer_t *buff, int distance, int i, int j)
{
    if (distance <= buff->size)
        my_put_pixel(buff, i, j, buff->color);
}

int my_put_circle(framebuffer_t *buff, int width, int height)
{
    int x = width;
    int y = height;
    int distance = 0;

    for (int i = x - buff->size; i <= x + buff->size; i ++)
        for (int j = y - buff->size; j <= y + buff->size; j ++) {
            distance = sqrt((i - x) * (i - x) + (j - y) * (j - y));
            check(buff, distance, i, j);
        }
    sfTexture_updateFromPixels(buff->texture, buff->pixel, 1920, 1080, 0, 0);
    return 0;
}
