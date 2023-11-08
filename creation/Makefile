##
## EPITECH PROJECT, 2023
## Linked-List
## File description:
## Makefile
##

SRC = 		creation.c \

SRC_MAIN = 	main.c \

SRC_SOL = 	../solution/solution.c \

OBJ = 		$(SRC:.c=.o)

OBJ_MAIN = 	$(SRC_MAIN:.c=.o)

OBJ_SOL = 	$(SRC_SOL:.c=.o)

NAME = 		creation

NAME_SOL = 	solution

all: 		$(NAME)

$(NAME): 	$(OBJ) $(OBJ_MAIN)
		@gcc -o $(NAME) $(OBJ) $(OBJ_MAIN) -Iinclude
		@echo "------------------------"
		@echo "Got :" && ./$(NAME)
		@echo "------------------------"
		@./$(NAME) > $(NAME).txt
		@make clean

$(NAME_SOL): 	$(OBJ_SOL) $(OBJ_MAIN)
		@gcc -o $(NAME_SOL) $(OBJ_SOL) $(OBJ_MAIN) -Iinclude
		@echo "------------------------"
		@echo "Expected :" && ./$(NAME_SOL)
		@echo "------------------------"
		@./$(NAME_SOL) > $(NAME_SOL).txt
		@make clean

test : 		$(NAME) $(NAME_SOL)
		@sh ../diff.sh $(NAME).txt $(NAME_SOL).txt

clean:
		@rm -f $(OBJ) $(OBJ_SOL)

fclean: 	clean
		@rm -f $(NAME) $(NAME_SOL) $(OBJ_MAIN) $(NAME).txt $(NAME_SOL).txt

re: 		fclean all

.PHONY: 	all clean fclean re