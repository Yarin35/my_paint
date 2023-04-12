/*
** EPITECH PROJECT, 2023
** create_button
** File description:
** button
*/

#include <unistd.h>
#include "../../include/my.h"
#include "../../include/structure.h"

button_t *create_b(sfVector2f position, sfVector2f size,
                button_state_t (*is_clicked) (button_t* , sfMouseButtonEvent*),
                button_state_t (*is_hover) (button_t* , sfMouseMoveEvent*))
{
    button_t* button = malloc(sizeof(button_t));
    button->rect = sfRectangleShape_create();
    set_position_but_color(position, size, button);
    if (p_300 && p_400 && p_500 && position.y != 680) {
        set_button(button, position, size);
    }
    button->is_clicked = is_clicked;
    button->is_hover = is_hover;
    return button;
}

void print_button_bis(create_text_t *text_k, button_t **buttons)
{
    buttons[13] = create_b((V) {55, 300}, (V){25, 25}, is_clicked, is_hover);
    buttons[14] = create_b((V) {10, 345}, (V){25, 25}, is_clicked, is_hover);
    buttons[15] = create_b((V) {55, 345}, (V){25, 25}, is_clicked, is_hover);
    buttons[16] = create_b((V) {10, 390}, (V){25, 25}, is_clicked, is_hover);
    buttons[17] = create_b((V) {55, 390}, (V){25, 25}, is_clicked, is_hover);
    buttons[18] = create_b((V) {10, 435}, (V){25, 25}, is_clicked, is_hover);
    buttons[19] = create_b((V) {55, 435}, (V){25, 25}, is_clicked, is_hover);
    buttons[20] = create_b((V) {40, 530}, (V){1, 1}, is_clicked, is_hover);
    buttons[21] = create_b((V) {39, 555}, (V){5, 5}, is_clicked, is_hover);
    buttons[22] = create_b((V) {36, 590}, (V){10, 10}, is_clicked, is_hover);
    buttons[23] = create_b((V) {40, 530}, (V){1, 1}, is_clicked, is_hover);
    buttons[24] = create_b((V) {39, 555}, (V){5, 5}, is_clicked, is_hover);
    buttons[25] = create_b((V) {36, 590}, (V){10, 10}, is_clicked, is_hover);
    buttons[26] = create_b((V) {6, 400}, (V){80, 23}, is_clicked, is_hover);
    buttons[27] = create_b((V) {6, 450}, (V){80, 23}, is_clicked, is_hover);
    buttons[28] = create_b((V) {6, 500}, (V){80, 23}, is_clicked, is_hover);
    buttons[35] = create_b((V) {35, 630}, (V){20, 20}, is_clicked, is_hover);
    buttons[36] = create_b((V) {35, 680}, (V){25, 25}, is_clicked, is_hover);
    buttons[37] = create_b((V) {35, 730}, (V){30, 30}, is_clicked, is_hover);
}

void print_button_bisbis(create_text_t *text_k, button_t **buttons)
{
    buttons[29] = create_b((V) {36, 630}, (V){10, 5}, is_clicked, is_hover);
    buttons[30] = create_b((V) {34, 655}, (V){15, 5}, is_clicked, is_hover);
    buttons[31] = create_b((V) {32, 680}, (V){20, 10}, is_clicked, is_hover);
    buttons[32] = create_b((V) {40, 723}, (V){1, 1}, is_clicked, is_hover);
    buttons[33] = create_b((V) {39, 750}, (V){5, 5}, is_clicked, is_hover);
    buttons[34] = create_b((V) {35, 775}, (V){15, 15}, is_clicked, is_hover);
}

button_t **print_button(create_text_t *text_k)
{
    button_t** buttons = malloc(sizeof(button_t*) * 38);
    buttons[0] = create_b((V) {126, 24}, (V){80, 23}, is_clicked, is_hover);
    buttons[1] = create_b((V) {250, 24}, (V){80, 23}, is_clicked, is_hover);
    buttons[2] = create_b((V) {374, 24}, (V){80, 23}, is_clicked, is_hover);
    buttons[3] = create_b((V) {126, 50}, (V){80, 23}, is_clicked, is_hover);
    buttons[4] = create_b((V) {126, 76}, (V){80, 23}, is_clicked, is_hover);
    buttons[5] = create_b((V) {126, 102}, (V){80, 23}, is_clicked, is_hover);
    buttons[6] = create_b((V) {250, 50}, (V){80, 23}, is_clicked, is_hover);
    buttons[7] = create_b((V) {250, 76}, (V){80, 23}, is_clicked, is_hover);
    buttons[8] = create_b((V) {374, 50}, (V){80, 23}, is_clicked, is_hover);
    buttons[9] = create_b((V) {374, 76}, (V){80, 23}, is_clicked, is_hover);
    buttons[10] = create_b((V) {1500, 10}, (V){400, 370}
                            , is_clicked, is_hover);
    buttons[11] = create_b((V) {1650, 10}, (V){230, 50}
                            , is_clicked, is_hover);
    buttons[12] = create_b((V) {10, 300}, (V){25, 25}, is_clicked, is_hover);
    print_button_bisbis(text_k, buttons);
    print_button_bis(text_k, buttons);
    return buttons;
}
