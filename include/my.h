/*
** EPITECH PROJECT, 2023
** struct
** File description:
** structure_h
*/

#include <SFML/Graphics.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Window.h>
#include <SFML/System/Clock.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "structure.h"
#include "pixel.h"

#ifndef struct
    #define struct

void if_bmp(general_t *all, button_t **buttons, framebuffer_t *framebuffer);
void save_file(general_t *all, button_t **buttons, framebuffer_t *framebuffer);
void set_button(button_t *button, sfVector2f position, sfVector2f size);
void set_position_but_color(sfVector2f position, sfVector2f size
                            ,button_t *button);
void draw_help_about(general_t *all, button_t **buttons
                    , create_text_t *text_k);
void if_pencil_eraser(general_t *all, button_t **buttons
                    , create_text_t *text_k);
void if_eraser(general_t *all, button_t **buttons, create_text_t *text_k);
void manage_pencil(general_t *all, button_t **buttons
                    , framebuffer_t *framebuffer);
void manage_eraser(general_t *all, button_t **buttons
                    , framebuffer_t *framebuffer);
void manage_size_button(button_t **buttons, framebuffer_t *framebuffer,
                        general_t *all);
void manage_color_button(button_t **buttons, framebuffer_t *framebuffer,
                        general_t *all);
void draw_all(general_t *all, button_t **buttons, create_text_t *text_k,
            framebuffer_t *framebuffer);
void print_line_pencil(general_t *all);
void print_line_eraser(general_t *all);
void draw_with_pencil(general_t *all, framebuffer_t *framebuffer,
                        create_text_t *text_k, button_t **buttons);
void draw_button_color(general_t *all, button_t **buttons);
void hover_button_2(general_t *all, button_t **buttons
                    , framebuffer_t *framebuffer);
void hover_button_1(general_t *all, button_t **buttons
                    , framebuffer_t *framebuffer,  create_text_t *text_k);
void hover_button_3(general_t *all, button_t **buttons
                    , framebuffer_t *framebuffer);
void draw_cursor(general_t *all);
void set_cursor(general_t *all);
void create_cursor(general_t *all);
void draw_menu_help(general_t *all, button_t **buttons, create_text_t *text_k);
void draw_menu_tools(general_t *all, button_t **buttons, create_text_t *text_k);
void draw_menu_file(general_t *all, button_t **buttons, create_text_t *text_k);
void color_button_3(general_t *all, button_t **buttons);
void color_button_2(general_t *all, button_t **buttons);
void color_button_1(general_t *all, button_t **buttons);
create_text_t *print_text(button_t **buttons, general_t *all);
button_t **print_button(create_text_t *text_k);
button_state_t is_clicked(button_t* button, sfMouseButtonEvent* event);
button_state_t is_hover(button_t* button, sfMouseMoveEvent* event) ;
button_t *create_b(sfVector2f position, sfVector2f size,
                button_state_t(*is_clicked) (button_t* , sfMouseButtonEvent*),
                button_state_t(*is_hover) (button_t* , sfMouseMoveEvent*));
sfText *create_text(sfText *text, char const *write);
void if_close_window(general_t *all);
void start_paint(general_t *all);
void param_window(general_t *all);
void open_menu(general_t *all);
void set_item(general_t *all);
void init_item(general_t *all);
void set_item_menu(init_sprite_t *init_sprite);
void init_item_menu(general_t *all);
void print_circle(general_t *all);
void draw_with_pencil_rect(general_t *all, framebuffer_t *framebuffer,
                        create_text_t *text_k, button_t **buttons);
void manage_rectangle(button_t **buttons, framebuffer_t *framebuffer
                        , general_t *all);
void manage_all(general_t *all, button_t **buttons
                , framebuffer_t *framebuffer,  create_text_t *text_k);
void change_color_save(general_t *all, button_t **buttons);
void if_not_click_then(general_t *all, button_t **buttons
                    , framebuffer_t *framebuffer,  create_text_t *text_k);
void if_option_1(framebuffer_t *framebuffer, general_t *all);

    #define CIRCLE 130
    #define RECT 120
    #define HIDE_MENU 30
    #define SHOW_MENU_FILE 10
    #define SHOW_MENU_TOOLS 20
    #define SHOW_MENU_HELP 40
    #define SHOW_HELP 50
    #define SHOW_ABOUT 60
    #define PENCIL 70
    #define ERASER 80
    #define OPEN 90
    #define NEW 100
    #define SAVE 110
    #define help_1 "new file : create a new empty file\nopen file : open a"
    #define help_2 " file present in a folder\ncalled assets\nsave file :"
    #define help_3 "pencil : select the pencil to write on the board\n"
    #define help_4 " : erase pencil drawings, you can select\n different sizes"
    #define help_5 "\nabout : display the user login\n "
    #define STATUS all->status
    #define WIN all->sett.window
    #define MOD all->sett.mode
    #define MouseButton &all->sett.event.mouseButton
    #define MouseMove &all->sett.event.mouseMove
    #define sfRect_setPos sfRectangleShape_setPosition
    #define sfRect_GlobalB sfRectangleShape_getGlobalBounds
    #define RGB sfColor_fromRGB
    #define C "./content/"
    #define V sfVector2f
    #define p_300 position.y != 300 && position.y != 345 && position.y != 390
    #define p_400 position.y != 435 && position.y != 530 && position.y != 555
    #define p_500 position.y != 590 && position.y != 630 && position.y != 655

#endif /* !struct */
