/*
** EPITECH PROJECT, 2023
** open_paint
** File description:
** open
*/

#include <unistd.h>
#include "../include/my.h"
#include "../include/structure.h"

void if_want_input(framebuffer_t *framebuffer, general_t *all
                    , create_text_t *text_k)
{
    if (framebuffer->option == 1 || framebuffer->option == 2) {
        sfRenderWindow_drawText(WIN, text_k[15].text, NULL);
        sfRenderWindow_drawRectangleShape(WIN, framebuffer->rect, NULL);
        sfRenderWindow_drawText(WIN, framebuffer->text, NULL);
    }
}

void draw_all(general_t *all, button_t **buttons, create_text_t *text_k,
                framebuffer_t *framebuffer)
{
    sfRenderWindow_clear(all->sett.window, sfWhite);
    sfRenderWindow_drawSprite(WIN, framebuffer->sprite, 0);
    sfRenderWindow_drawRectangleShape(WIN ,all->interface[2].top, 0);
    sfRenderWindow_drawRectangleShape(WIN ,all->interface[3].top, 0);
    sfRenderWindow_drawRectangleShape(WIN ,all->interface[0].top, 0);
    sfRenderWindow_drawRectangleShape(WIN ,all->interface[1].top, 0);
    sfRenderWindow_drawSprite(WIN, all->init_sprite[3].menu, 0);
    for (int i = 0; i != 3; i++)
        sfRenderWindow_drawRectangleShape(WIN , buttons[i]->rect, 0);
    for (int i = 0; i != 3; i++)
        sfRenderWindow_drawText(WIN, text_k[i].text, 0);
    draw_menu_file(all, buttons, text_k);
    draw_menu_tools(all, buttons, text_k);
    for (int i = 12; i != 20; i++)
        sfRenderWindow_drawRectangleShape(WIN, buttons[i]->rect, 0);
    draw_menu_help(all, buttons, text_k);
    draw_cursor(all);
    if_want_input(framebuffer, all, text_k);
    sfRenderWindow_display(all->sett.window);
}

void hover_released(general_t *all, button_t **buttons
                    , framebuffer_t *framebuffer,  create_text_t *text_k)
{
    if (buttons[8]->is_clicked(buttons[8], MouseButton) == RELEASED) {
        STATUS = SHOW_ABOUT;
        framebuffer->False = false;
    }
    if (buttons[9]->is_clicked(buttons[9], MouseButton) == RELEASED) {
        STATUS = SHOW_HELP;
        framebuffer->False = false;
    }
    if (buttons[5]->is_clicked(buttons[5], MouseButton) == RELEASED) {
        STATUS = SAVE;
            } else {
                hover_button_3(all, buttons, framebuffer);
                hover_button_2(all, buttons, framebuffer);
                hover_button_1(all, buttons, framebuffer, text_k);
                if_not_click_then(all, buttons, framebuffer, text_k);
            }
}

void click_hover_released(general_t *all, button_t **buttons
                        , framebuffer_t *framebuffer, create_text_t *text_k)
{
    if (all->sett.event.type == sfEvtMouseButtonPressed &&
        all->sett.event.mouseButton.button == sfMouseLeft) {
        if (buttons[3]->is_clicked(buttons[3], MouseButton) == PRESSED) {
            STATUS = NEW;
            my_reset_framebuffer(framebuffer);
            sfRenderWindow_clear(WIN, sfWhite);
            sfRenderWindow_display(WIN);
        }
        manage_all(all, buttons, framebuffer, text_k);
        change_color_save(all, buttons);
        save_file(all, buttons, framebuffer);
        if (buttons[4]->is_clicked(buttons[4], MouseButton) == PRESSED) {
                framebuffer->option = 2;
                my_load_buffer(framebuffer, &all->sett.event);
        }
    } else {
        hover_released(all, buttons, framebuffer, text_k);
    }
}

void start_paint(general_t *all)
{
    framebuffer_t *framebuffer = my_framebuffer_create(framebuffer);
    init_item(all);
    all->status = 0;
    all->option = 1;
    button_t **buttons = print_button(all->text_k);
    create_text_t *text_k = print_text(buttons, all);
    create_cursor(all);
    framebuffer->state = 1;
    while (sfRenderWindow_isOpen(all->sett.window)) {
        set_cursor(all);
        while (sfRenderWindow_pollEvent(all->sett.window, &all->sett.event)) {
            if_close_window(all);
            click_hover_released(all, buttons, framebuffer, text_k);
            if_option_1(framebuffer, all);
        }
        sfRenderWindow_clear(WIN, sfWhite);
        draw_all(all, buttons, text_k, framebuffer);
    }
}
