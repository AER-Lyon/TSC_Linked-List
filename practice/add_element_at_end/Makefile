##
## EPITECH PROJECT, 2023
## Linked-List
## File description:
## Makefile
##

SRC = 		add_element_at_end.c \
			../../solution/creation.c \
			../../solution/display.c \
			../../solution/free.c \
			../../solution/get_last_element.c \

SRC_MAIN = 	main.c \

SRC_SOL = 	../../solution/display.c \
			../../solution/get_last_element.c \
			../../solution/creation.c \
			../../solution/free.c \
			../../solution/add_element_at_end.c \

OBJ = 		$(SRC:.c=.o)

OBJ_MAIN = 	$(SRC_MAIN:.c=.o)

OBJ_SOL = 	$(SRC_SOL:.c=.o)

NAME = 		add_element_at_end

NAME_SOL = 	solution

all: 		$(NAME)

$(NAME): 	$(OBJ) $(OBJ_MAIN)
		@gcc -o $(NAME) $(OBJ) $(OBJ_MAIN) -Iinclude
		@echo "------------------------"
		@echo "Got :" && ./$(NAME) 1 2 3 4 5 6 7 8 9 10
		@echo "------------------------"
		@./$(NAME) > $(NAME).txt

$(NAME_SOL): 	$(OBJ_SOL) $(OBJ_MAIN)
		@gcc -o $(NAME_SOL) $(OBJ_SOL) $(OBJ_MAIN) -Iinclude
		@echo "------------------------"
		@echo "Expected :" && ./$(NAME_SOL) 1 2 3 4 5 6 7 8 9 10
		@echo "------------------------"
		@./$(NAME_SOL) > $(NAME_SOL).txt

test : 		$(NAME) $(NAME_SOL)
		@sh ../../diff.sh $(NAME).txt $(NAME_SOL).txt
		@make fclean

clean:
		@rm -f $(OBJ) $(OBJ_SOL)

fclean: 	clean
		@rm -f $(NAME) $(NAME_SOL) $(OBJ_MAIN) $(NAME).txt $(NAME_SOL).txt

re: 		fclean all

.PHONY: 	all clean fclean re