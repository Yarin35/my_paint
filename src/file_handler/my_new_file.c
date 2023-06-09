/*
** EPITECH PROJECT, 2023
** my_new_file.c
** File description:
** my_new_file
*/

#include "../../include/pixel.h"

void if_option_1_or_2(framebuffer_t *buffer, sfEvent *event)
{
    if (buffer->option == 1)
        my_save_buffer(buffer);
    else {
        if (buffer->option == 2) {
            my_load_buffer(buffer, event);
            buffer->name = my_calloc(1, 10);
        }
    }
}

void if_buffer_or_text(framebuffer_t *buffer, sfEvent *event, char *name)
{
    if (event->type == sfEvtTextEntered) {
        if (event->text.unicode >= 48 && event->text.unicode <= 122)
            name[buffer->namelen ++] = (char)event->text.unicode;
        if (event->text.unicode == 0 && buffer->namelen > 0)
            name[-- buffer->namelen] = '\0';
    }
}

char *enter_name(framebuffer_t *buffer, sfEvent *event)
{
    char *name = my_calloc(sizeof(unsigned char), 10);

    if (buffer->namelen == 9)
        return NULL;
    if_buffer_or_text(buffer, event, name);
    name[buffer->namelen] = '\0';
    buffer->namelen = 0;
    if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
        buffer->name = my_strcat(buffer->name, name);
        sfText_setString(buffer->text, buffer->name);
        if_option_1_or_2(buffer, event);
        buffer->option = 4;
        if (!buffer->namefull)
            buffer->namefull = true;
        else
            buffer->namefull = false;
        return name;
    }
    return name;
}

void my_new_file(framebuffer_t *buff, sfEvent *event)
{
    char *filename = enter_name(buff, event);

    if (filename) {
        buff->name = my_strcat(buff->name, filename);
        sfText_setString(buff->text, buff->name);
        free(filename);
    }
    return;
}
