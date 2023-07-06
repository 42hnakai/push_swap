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
	./push_swap 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1  && \
	cd push_swap_tester/ && \
	python3 push_swap_tester.py -l 16 -c 500 -r 1 100 && \
	cd -

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
