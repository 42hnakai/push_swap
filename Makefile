CC = gcc
GFLAGS = -Wall -Wextra -Werror
NAME = push_swap
SRC = $(wildcard ft_*.c) main.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(GFLAGS) $(OBJ) -o $(NAME)

# $(OBJ): $(SRC)
# 	$(CC) $(GFLAGS) -c $(SRC)

.c.o:
	$(CC) $(GFLAGS) -c $(SRC)

test : all
	./$(NAME) 1 3 5 2 4 6 8
	./$(NAME) 1 3 5 2 4 6 8| grep -e 'sa' -e 'sb' -e 'ss' -e 'pa' -e 'pb' -e 'ra' -e 'rb' -e 'rr' -e 'rra' -e 'rrb' -e 'rrr' | wc -l

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
