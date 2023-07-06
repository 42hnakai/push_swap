#include "push_swap.h"

void	ra(int *ary_a)
{
	int i = 0;
	int x;
	x = ary_a[0];
	while (ary_a[i + 1] != '\0')
	{
		ary_a[i] = ary_a[i + 1];
		i++;
	}
	ary_a[i] = x;
	ary_a[i + 1] = '\0';
	printf("ra\n");
}