##
## EPITECH PROJECT, 2023
## Linked-List
## File description:
## Makefile
##

SRC = 		add_element_at_end.c \
			add_element_at.c \
			creation.c \
			display.c \
			free.c \
			get_last_element.c \
			remove_element_at.c \
			reverse_list.c \
			solution.c

OBJ = 		$(SRC:.c=.o)

NAME = 		solution

all: 		$(NAME)

$(NAME): 	$(OBJ)
		gcc -o $(NAME) $(OBJ) -Iinclude

clean:
		rm -f $(OBJ)

fclean: 	clean
		rm -f $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re