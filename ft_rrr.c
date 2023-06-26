#include "ft_push_swap.h"

void	ft_rrr(int *ary_a, int *ary_b)
{
	size_t len_a;
	int x;
	len_a = ft_strlen(ary_a);
	x = ary_a[len_a - 1];
	ary_a[len_a] = '\0';
	while (len_a > 1)
	{
		ary_a[len_a - 1] = ary_a[len_a - 2];
		len_a--;
	}
	ary_a[0] = x;

	size_t len_b;
	int y;
	len_b = ft_strlen(ary_b);
	y = ary_b[len_b - 1];
	ary_b[len_b] = '\0';
	while (len_b > 1)
	{
		ary_b[len_b - 1] = ary_b[len_b - 2];
		len_b--;
	}
	ary_b[0] = y;
	printf("rrr\n");
}