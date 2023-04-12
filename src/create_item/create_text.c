/*
** EPITECH PROJECT, 2023
** create_button
** File description:
** button
*/

#include <unistd.h>
#include "../../include/my.h"
#include "../../include/structure.h"
#include "../../lib/my/prototypes.h"

sfText *c_text(sfText *text, char const *write)
{
    sfFont* font = sfFont_createFromFile("./content/Raleway-Regular.ttf");
    text = sfText_create();
    sfText_setString(text, write);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 24);
    sfText_setFillColor(text, sfColor_fromRGB(3, 168, 244));
    sfFloatRect textRect = sfText_getLocalBounds(text);
    sfText_setOrigin(text, (sfVector2f){textRect.left + textRect.width / 2.0f
    , textRect.top + textRect.height / 2.0f});
    return text;
}

void get_global_bounds(create_text_t *text_k, button_t **buttons)
{
    text_k[15].text = c_text(text_k->text, "Enter  the name of the file :");
    text_k[16].text = c_text(text_k->text, ".JPG");
    text_k[17].text = c_text(text_k->text, ".PNG");
    text_k[18].text = c_text(text_k->text, ".BMP");
    for (int i = 0; i != 10; i++) {
        text_k[i].buttonRect = sfRect_GlobalB(buttons[i]->rect);
    }
    text_k[16].buttonRect = sfRect_GlobalB(buttons[26]->rect);
    text_k[17].buttonRect = sfRect_GlobalB(buttons[27]->rect);
    text_k[18].buttonRect = sfRect_GlobalB(buttons[28]->rect);
}

void init_text(create_text_t *text_k, button_t **buttons, general_t *all)
{
    text_k[0].text = c_text(text_k->text, "file");
    text_k[1].text = c_text(text_k->text, "edition");
    text_k[2].text = c_text(text_k->text, "help");
    text_k[3].text = c_text(text_k->text, "new file");
    text_k[4].text = c_text(text_k->text, "open file");
    text_k[5].text = c_text(text_k->text, "save file");
    text_k[6].text = c_text(text_k->text, "pencil");
    text_k[7].text = c_text(text_k->text, "eraser");
    text_k[8].text = c_text(text_k->text, "about");
    text_k[9].text = c_text(text_k->text, "help");
    text_k[10].text = c_text(text_k->text, help_1 help_2 "allows you to save"
    " the open file,\n after the file will be present in the assets\n folder\n"
    help_3 "you can select several sizes and colors\neraser"help_4 help_5"you "
    "need to have a folder called ""assets\n to save/open the image you want");
    text_k[11].text = c_text(text_k->text, "user login : ");
    text_k[12].text = c_text(text_k->text, all->login);
    text_k[13].text = c_text(text_k->text, "PENCIL");
    text_k[14].text = c_text(text_k->text, "ERASER");
    get_global_bounds(text_k, buttons);
}

void set_text(create_text_t *text_k)
{
    for (int i = 0; i != 10; i++) {
        sfText_setPosition(text_k[i].text, (sfVector2f)
        {text_k[i].buttonRect.left + text_k[i].buttonRect.width / 2,
        text_k[i].buttonRect.top + text_k[i].buttonRect.height / 2});
    }
    sfText_setPosition(text_k[15].text, (V){890, 500});
    sfText_setPosition(text_k[10].text, (V){1700, 190});
    sfText_setPosition(text_k[11].text, (V){1730, 36});
    sfText_setPosition(text_k[12].text, (V){1820, 33});
    sfText_setPosition(text_k[13].text, (V){42, 500});
    sfText_setPosition(text_k[14].text, (V){42, 500});
    for (int i = 16; i != 19; i++) {
        sfText_setPosition(text_k[i].text, (sfVector2f)
        {text_k[i].buttonRect.left + text_k[i].buttonRect.width / 2,
        text_k[i].buttonRect.top + text_k[i].buttonRect.height / 2});
    }
}

create_text_t *print_text(button_t **buttons, general_t *all)
{
    create_text_t *text_k = malloc(sizeof(create_text_t) * 19);
    init_text(text_k, buttons, all);
    set_text(text_k);
    return text_k;
}
