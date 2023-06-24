CC = gcc
GFLAGS = -Wall -Wextra -Werror
NAME = push_swap
SRC = ft_*.c testmain.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(GFLAGS) $(OBJ) -o $(NAME)

$(OBJ):
	$(CC) $(GFLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re

