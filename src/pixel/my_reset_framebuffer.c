/*
** EPITECH PROJECT, 2023
** to reset the pixels of the framebuffer
** File description:
** gh
*/
#include "../../include/pixel.h"

void my_reset_framebuffer(framebuffer_t *framebuffer)
{
    size_t len = (1920 * 1080 * 4);
    for (size_t i = 0; i <= len; i ++)
        framebuffer->pixel[i] = 255;
    for (size_t i = 3; i <= len; i += 4)
        framebuffer->pixel[i] = 0;
    return;
}
