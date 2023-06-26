#include "ft_push_swap.h"

void	ft_ss(int *ary_a, int *ary_b)
{
	ft_swap(&ary_a[0], &ary_a[1]);
	ft_swap(&ary_b[0], &ary_b[1]);
	printf("ss\n");
}