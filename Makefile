CC = gcc
GFLAGS = -Wall -Wextra -Werror
NAME = push_swap
SRC = ft_*.c main.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(GFLAGS) $(OBJ) -o $(NAME)

$(OBJ): $(SRC)
	$(CC) $(GFLAGS) -c $(SRC)

# .c.o:
# 	$(CC) $(GFLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
