CC = gcc
GFLAGS = -Wall -Wextra -Werror
NAME = push_swap
SRC = swap.c push.c rotate.c reverse_rotate.c\
	sort_tiny.c sort_small.c sort_large.c revsort_three.c\
	coordComp.c isSorted.c getMaxMin.c midian.c  minIndexSign.c half_ary.c push_a_to_b.c\
	ft_atoi.c ft_strlen.c\
	push_swap.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(GFLAGS) $(OBJ) -o $(NAME)

# $(OBJ): $(SRC)
# 	$(CC) $(GFLAGS) -c $(SRC)

.c.o:
	$(CC) $(GFLAGS) -c $(SRC)

test : all
test: all
	for i in $$(seq 95 100); do \
		cd push_swap_tester/ && \
		python3 push_swap_tester.py -l $$i -c 500 -r 1 $$i && \
		cd - ; \
	done

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
