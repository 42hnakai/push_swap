#include "push_swap.h"

void sort_four(int *ary_x, int *ary_y)
{
	max_min max_min;

	max_min = getMaxMin(ary_x);
	while (ft_strlen(ary_x) > 3)
	{
		if (ary_x[0] == max_min.min)
			pb(ary_x, ary_y);
		else
			ra(ary_x);
	}
	sort_three(ary_x);
	pa(ary_x, ary_y);
}
