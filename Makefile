##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## true
##

NAME = my_paint

SRC +=  src/manage_tools_size.c
SRC += 	src/save_png_jpg_bmp.c
SRC	+=  src/pixel/my_put_circle.c
SRC +=  src/pixel/my_rect_create.c
SRC +=  src/pixel/my_calloc.c
SRC +=  src/pixel/my_frame_buffer_create.c
SRC +=  src/pixel/my_put_pixel.c
SRC +=  src/pixel/square_print.c
SRC +=  src/manage_tools_button.c
SRC +=  src/hover_button.c
SRC +=  src/set_button.c
SRC +=  src/draw/draw_help.c
SRC +=  src/draw/draw_tools.c
SRC +=  src/create_item/create_cursor.c
SRC +=  src/draw/draw_sprite.c
SRC +=  src/create_item/create_color_button.c
SRC +=	src/draw/draw_line_erase.c
SRC +=	src/main.c
SRC +=	src/create_item/create_button.c
SRC +=	src/state_button.c
SRC +=	src/open_menu.c
SRC +=	src/create_item/create_interface.c
SRC +=	src/open_paint.c
SRC +=	src/create_item/create_text.c
SRC +=	src/menu/init_menu.c
SRC +=	src/menu/set_menu.c
SRC += 	src/pixel/my_reset_framebuffer.c
SRC +=  src/create_item/create_circle.c
SRC +=  src/file_handler/my_file_explorer.c
SRC +=  src/file_handler/my_new_file.c
SRC +=  src/file_handler/my_save_buffer.c
SRC +=  src/file_handler/my_load_buffer.c
SRC +=  src/pixel/my_put_rectangle.c
SRC +=  src/my_strcat.c


SRC +=	lib/my/my_str_to_word_gen.c
SRC +=	lib/my/clean_str.c
SRC +=	lib/my/clean.c
SRC +=	lib/my/my_strcmp.c
SRC +=	lib/my/my_strdup.c
SRC +=	lib/my/my_strncpy.c
SRC +=	lib/my/my_num_check.c
SRC +=	lib/my/my_revstr.c
SRC +=	lib/my/int_len.c
SRC +=	lib/my/flag_d_i_s_c.c
SRC +=	lib/my/my_putnbr_base.c
SRC +=	lib/my/getnbr.c
SRC +=	lib/my/my_str_to_word_array.c
SRC +=	lib/my/my_put_nbr.c
SRC +=	lib/my/flag_space.c
SRC +=	lib/my/my_putchar.c
SRC +=	lib/my/my_putfloat.c
SRC +=	lib/my/my_put_nbr_test.c
SRC +=	lib/my/my_putstr.c
SRC +=	lib/my/my_s.c
SRC +=	lib/my/my_strlen.c
SRC +=	lib/my/my_printf.c
SRC +=	lib/my/my_putchar_r.c
SRC +=	lib/my/my_put_nbr_long.c
SRC +=	lib/my/my_put_nombre.c
SRC +=	lib/my/my_putstr_test.c
SRC +=	lib/my/my_strcpy.c
SRC +=	lib/my/flag_special.c
SRC +=	lib/my/if_neg.c

Graphlib = -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window -lm

CFLASG = -W -Wextra -Wall -Wno-pointer-sign -Werror

OBJ = $(SRC:.c=.o)

CC = gcc

all:	$(NAME)

$(NAME):	$(OBJ)
			gcc $(CFLAGS) -o $(NAME) $(SRC) -g $(Graphlib)
			@ echo "Compiled !"

clean:
	rm -f $(OBJ)
	@ echo "Clean done !"

fclean: clean
	rm -f $(NAME)

re: fclean all

test_clean :
	rm -f *.gcno
	rm -f *.gcda
	rm units_test

.PHONY: clean fclean re test test_clean

.SILENT:
