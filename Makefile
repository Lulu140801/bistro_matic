##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## do_op
##

CC	= 	gcc

SRC	=		src/main.c \
				src/eval_expr/eval_expr.c \
				src/eval_expr/add.c \
				src/eval_expr/div.c \
				src/eval_expr/mult.c \
				src/eval_expr/subb.c \
				src/eval_expr/mod.c \
				src/eval_expr/decoupe.c \
				src/eval_expr/regroup.c \
				src/eval_expr/lib/my_strlen.c \
				src/eval_expr/lib/my_putchar.c \
				src/eval_expr/lib/my_put_nbr.c \
				src/eval_expr/lib/my_putstr.c \
				src/eval_expr/lib/my_strcpy.c \
				src/eval_expr/lib/my_getnbr.c \
				src/eval_expr/lib/my_strlen_2.c \
				src/eval_expr/lib/my_strcpy_2.c \
				src/eval_expr/lib/my_strcpy_1.c \
				src/eval_expr/lib/my_revstr.c \
				lib/my/my_atoi.c \
				src/error.c \
				src/conv_str/conv_operator.c

OBJ     =		$(SRC:.c=.o)

NAME	=		calc

CFLAGS 	=	-W -Wall -Wextra -pedantic


all:	$(NAME) clean

$(NAME): $(OBJ)
		gcc -o $(NAME) $(OBJ)
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

sweet:	all clean