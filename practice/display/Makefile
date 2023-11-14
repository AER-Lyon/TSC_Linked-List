##
## EPITECH PROJECT, 2023
## Linked-List
## File description:
## Makefile
##

SRC = 		display.c \
			../../solution/creation.c \
			../../solution/free.c \

SRC_MAIN = 	main.c \

SRC_SOL = 	../../solution/display.c \
			../../solution/creation.c \
			../../solution/free.c \

OBJ = 		$(SRC:.c=.o)

OBJ_MAIN = 	$(SRC_MAIN:.c=.o)

OBJ_SOL = 	$(SRC_SOL:.c=.o)

NAME = 		display

NAME_SOL = 	solution

all: 		$(NAME)

$(NAME): 	$(OBJ) $(OBJ_MAIN)
		@gcc -o $(NAME) $(OBJ) $(OBJ_MAIN) -Iinclude
		@echo "------------------------"
		@echo "Got :" && ./$(NAME) 1 2 3 4 5 6 7 8 9 10
		@echo "------------------------"
		@./$(NAME) 1 2 3 4 5 6 7 8 9 10 > $(NAME).txt

$(NAME_SOL): 	$(OBJ_SOL) $(OBJ_MAIN)
		@gcc -o $(NAME_SOL) $(OBJ_SOL) $(OBJ_MAIN) -Iinclude
		@echo "------------------------"
		@echo "Expected :" && ./$(NAME_SOL) 1 2 3 4 5 6 7 8 9 10
		@echo "------------------------"
		@./$(NAME_SOL) 1 2 3 4 5 6 7 8 9 10 > $(NAME_SOL).txt

test : 		$(NAME) $(NAME_SOL)
		@sh ../../diff.sh $(NAME).txt $(NAME_SOL).txt
		@make fclean

clean:
		@rm -f $(OBJ) $(OBJ_SOL)

fclean: 	clean
		@rm -f $(NAME) $(NAME_SOL) $(OBJ_MAIN) $(NAME).txt $(NAME_SOL).txt

re: 		fclean all

.PHONY: 	all clean fclean re