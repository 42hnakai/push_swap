#include "ft_push_swap.h"

// ary_xのものをary_yを使ってソートする
void ft_sort_five(int *ary_x, int *ary_y, int argc)
{
	int count;
	max_min max_min;

	count = 0;
	max_min = ft_max_min(ary_x);
	if (argc == 4)
	{
		while (ft_strlen(ary_x) > 3)
		{
			if (ary_x[0] == max_min.max)
				ft_pb(ary_x, ary_y);
			else
				ft_rb(ary_x);
		}
		ft_sort_three(ary_x);
		ft_pa(ary_x, ary_y);
		ft_ra(ary_x);
	}
	else
	{
		while (ft_strlen(ary_x) > 3)
		{
			if (ary_x[0] == max_min.min || ary_x[0] == max_min.max)
				ft_pb(ary_x, ary_y);
			else
				ft_ra(ary_x);
		}
		ft_sort_three(ary_x);
		if (ary_y[0] == max_min.min)
		{
			ft_pa(ary_x, ary_y);
			ft_pa(ary_x, ary_y);
			ft_ra(ary_x);
		}
		else
		{
			ft_pa(ary_x, ary_y);
			ft_ra(ary_x);
			ft_pa(ary_x, ary_y);
		}
	}
}