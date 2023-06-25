#include "ft_push_swap.h"

void ft_pa(int *ary_a, int *ary_b)
{
	size_t i;
	i = ft_strlen(ary_a);
	if (ary_b[0] != '\0')
	{
		while (i > 0)
		{
			ary_a[i] = ary_a[i - 1];
			i--;
		}
		ary_a[0] = ary_b[0];
		i = 0;
		while (ary_b[i + 1] != '\0')
		{
			ary_b[i] = ary_b[i + 1];
			i++;
		}
		ary_b[i] = '\0';
	}
	printf("pa\n");
}