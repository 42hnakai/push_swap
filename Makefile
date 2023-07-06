CC = gcc
GFLAGS = -Wall -Wextra -Werror
NAME = push_swap
SRC = sa.c sb.c ss.c pa.c pb.c ra.c rb.c rr.c rra.c rrb.c rrr.c \
	sort_two.c sort_three.c sort_four.c sort_five.c sort_many.c revsort_three.c sort8To25.c\
	coordComp.c isSorted.c getMaxMin.c midian.c  minIndexSign.c swap.c half_b.c\
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
	for i in $$(seq 1 500); do \
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
