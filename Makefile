##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## function
##

NAME    =       eval_expr

all:	$(NAME)

$(NAME):
	gcc -o eval_expr lib/my/*.c *.c

clean:
	rm -f eval_expr

fclean: clean
	rm -f eval_expr

re	: fclean all
