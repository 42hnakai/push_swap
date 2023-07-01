#include "ft_push_swap.h"

void ft_sort_six(int *ary_a_cc, int *ary_b, int len)
{
	int mid;
	int j;
	j = 0;
	mid = ft_midian(ary_b);
	while (j < len)
	{
		if (ary_b[0] < mid)
			ft_pa(ary_a_cc, ary_b);
		else
			ft_rb(ary_b);
		j++;
	}
	ft_sort_three_x(ary_a_cc);
	ft_revsort_three(ary_b);
	ft_pa(ary_a_cc, ary_b);
	ft_pa(ary_a_cc, ary_b);
	ft_pa(ary_a_cc, ary_b);
	ft_ra(ary_a_cc);
	ft_ra(ary_a_cc);
	ft_ra(ary_a_cc);
}