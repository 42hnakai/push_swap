CC = gcc
GFLAGS = -Wall -Wextra -Werror
NAME = push_swap
SRC =libft/ft_atoi.c libft/ft_split.c libft/ft_strncmp.c libft/ft_strlcpy.c libft/ft_strlen.c\
	rules/swap.c rules/push.c rules/rotate.c rules/reverse_rotate.c\
	sorts/sort_tiny.c sorts/sort_small.c sorts/sort_many.c\
	others/compress_coords.c others/free_double_ptr.c others/get_max_min.c others/half_ary.c others/is_error.c\
	others/is_sorted.c others/malloc_a_b.c others/malloc_size.c others/midian.c others/minIndexSign.c\
	others/push_a_to_b.c others/set_ary_a.c\
	push_swap.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(GFLAGS) $(OBJ) -o $(NAME)

.c.o:
	$(CC) $(GFLAGS) -c $< -o $@

test: all
	for i in $$(seq 500 500); do \
		cd push_swap_tester/ && \
		python3 push_swap_tester.py -l $$i -c 500 -r -$$i $$i&& \
		cd - ; \
	done

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re

