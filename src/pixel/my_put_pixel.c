/*
** EPITECH PROJECT, 2023
** my_put_pixel.c
** File description:
** put pixel function
*/

#include "../../include/pixel.h"

void my_put_pixel(framebuffer_t *buffer, int height, int width, sfColor color)
{
    if (height >= 193 && height <= 1824 && width >= 171 && width <= 911) {
        buffer->pixel[(1920 * width + height) * 4] = color.r;
        buffer->pixel[(1920 * width + height) * 4 + 1] = color.g;
        buffer->pixel[(1920 * width + height) * 4 + 2] = color.b;
        buffer->pixel[(1920 * width + height) * 4 + 3] = color.a;
    }
    return;
}
