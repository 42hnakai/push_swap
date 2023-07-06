#include "ft_push_swap.h"

void	ft_sort_xx(int *ary_x, int *ary_y)
{
	int i;
	int count;
	max_min max_min;
	i = 0;
	count = 0;
	while (ft_strlen(ary_y) > 3)
	{
		max_min = ft_max_min(ary_y);
		if (ary_y[0] == max_min.min)
		{
			ft_pa(ary_x, ary_y);
			printf("---------------------");
			ft_ra(ary_x);
		}
		else if (ary_y[0] == max_min.max)
		{
			ft_pa(ary_x, ary_y);
			count += 1;
		}
		else
			ft_rb(ary_y);
	}
	ft_revsort_three(ary_y);
	ft_pa(ary_x, ary_y);
	ft_pa(ary_x, ary_y);
	ft_pa(ary_x, ary_y);
	while (i < count + 3)
	{
		ft_ra(ary_x);
		i++;
	}
}