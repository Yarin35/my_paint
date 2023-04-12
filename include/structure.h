/*
** EPITECH PROJECT, 2023
** structure
** File description:
** struc
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Time.h>
#include <SFML/System/Vector3.h>
#include <unistd.h>
#include <stddef.h>
#include "pixel.h"

#ifndef struc
    #define struc

typedef struct param {

        sfVideoMode mode;
        sfRenderWindow *window;
        sfEvent event;

} param_t;

typedef struct init_sprite_s {

    sfSprite *menu;
    sfTexture *texture_menu;
    sfVector2f pos;
    sfVector2f scale;

} init_sprite_t;

typedef struct interface_s {

    sfRectangleShape *top;
    sfVector2f size;
    sfVector2f pos;
    sfText *text;

} interface_t;

typedef struct create_text_s {

    sfText *text;
    sfFloatRect buttonRect;

} create_text_t;

typedef enum {
    NONE, HOVER, PRESSED, RELEASED
} button_state_t;

typedef struct button_s {

    sfRectangleShape *rect;
    button_state_t (*is_clicked)(struct button_s* , sfMouseButtonEvent*);
    button_state_t (*is_hover)(struct button_s* , sfMouseMoveEvent*);

} button_t;

typedef struct cursor_s {

    sfSprite *cursor;
    sfTexture *texture;
    sfVector2f mouse_pos;

} cursor_t;

typedef struct create_circle_s {
    sfCircleShape *circ;
} create_circle_t;

typedef struct general_s {

    create_circle_t *circle;
    framebuffer_t *framebuffer;
    cursor_t *cursor;
    param_t sett;
    init_sprite_t *init_sprite;
    interface_t *interface;
    create_text_t *text_k;
    button_t *button;
    int status;
    char *login;
    int option;

} general_t;


#endif /* !struc */
