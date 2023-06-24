#include "ft_push_swap.h"

void	ft_rra(char *ary_a)
{
	size_t len_a;
	char x;
	len_a = ft_strlen(ary_a);
	x = ary_a[len_a - 1];
	ary_a[len_a] = '\0';
	while (len_a > 1)
	{
		ary_a[len_a - 1] = ary_a[len_a - 2];
		len_a--;
	}
	ary_a[0] = x;
}