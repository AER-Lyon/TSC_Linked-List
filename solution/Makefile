##
## EPITECH PROJECT, 2023
## Linked-List
## File description:
## Makefile
##

SRC = 		solution.c \

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