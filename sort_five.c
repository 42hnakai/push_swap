#include "push_swap.h"

// ary_xのものをary_yを使ってソートする
void sort_five(int *ary_x, int *ary_y)
{
	max_min max_min;

	max_min = getMaxMin(ary_x);
	while (ft_strlen(ary_x) > 3)
	{
		if (ary_x[0] == max_min.min || ary_x[0] == max_min.max)
			pb(ary_x, ary_y);
		else
			ra(ary_x);
	}
	sort_three(ary_x);
	if (ary_y[0] == max_min.min)
	{
		pa(ary_x, ary_y);
		pa(ary_x, ary_y);
		ra(ary_x);
	}
	else
	{
		pa(ary_x, ary_y);
		ra(ary_x);
		pa(ary_x, ary_y);
	}
}