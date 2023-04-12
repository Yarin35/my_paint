/*
** EPITECH PROJECT, 2023
** pixel.h
** File description:
** pixel.h
*/

#ifndef PIXEL_H
    #define PIXEL_H
    #include <SFML/System.h>
    #include <SFML/Audio.h>
    #include <SFML/Window.h>
    #include <SFML/Graphics.h>
    #include <SFML/Config.h>
    #include <stdlib.h>
    #include <stddef.h>
    #include <stdbool.h>
    #include <unistd.h>
    #include <time.h>
    #include <fcntl.h>
    #include <stdio.h>

typedef struct mouse_s{

    sfColor color;
    sfVector2i position;

} mouse_t;

typedef struct index_s {

    int size;
    int i;
    int j;
    sfColor color;
    sfTexture *text;
    sfSprite *sprite;
    sfTime time;
    sfClock *clock;

} index_t;

typedef struct framebuffer_s {

    unsigned int x;
    unsigned int y;
    sfUint8 *pixel;
    sfTexture *texture;
    sfSprite *sprite;
    sfText *text;
    char *name;
    int namelen;
    bool namefull;
    sfFont *font;
    bool False;
    sfRectangleShape *rect;
    FILE *fd;
    int option;
    sfColor color;
    int filetype;
    int size;
    int opt;
    int state;

} framebuffer_t;

framebuffer_t *my_framebuffer_create(framebuffer_t *framebuffer);
void my_put_pixel(framebuffer_t *buffer, int height, int width, sfColor color);
void *my_calloc(size_t type, size_t size);
void my_put_square(framebuffer_t *framebuffer, index_t *i);
void square_print(framebuffer_t *buff, int size, int x, int y);
void my_reset_framebuffer(framebuffer_t *framebuffer);
int pencil_paint(framebuffer_t *b, mouse_t *m, sfRenderWindow *w, sfEvent *evt);
int my_erase(framebuffer_t *framebuffer, mouse_t *mouse);
void my_file_explorer(framebuffer_t *buff, sfEvent *event);
sfRectangleShape *my_rect_create(sfVector2f size, sfVector2f position);
void my_framebuffer_destroy(framebuffer_t *buffer);
void my_new_file(framebuffer_t *buff, sfEvent *event);
char *enter_name(framebuffer_t *buffer, sfEvent *event);
void my_save_file(framebuffer_t *buff, sfEvent *event);
int my_save_buffer(framebuffer_t *buff);
int my_load_buffer(framebuffer_t *buff, sfEvent *event);
int my_put_circle(framebuffer_t *buff, int width, int height);
int my_put_rectangle(framebuffer_t *buff, int size, int x, int y);
char *my_strcat(char *dest, char *src);
#endif
