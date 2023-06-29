#include "ft_push_swap.h"

void ft_sort_five(int *ary_a_cc, int *ary_b, int argc)
{
	if (argc == 4)
	{
		while (ft_strlen(ary_b) != 1)
		{
			if (ary_a_cc[0] == 1)
				ft_pb(ary_a_cc, ary_b);
			else
				ft_ra(ary_a_cc);
		}
		ft_sort_three(ary_a_cc);
		ft_pa(ary_a_cc, ary_b);
	}
	else
	{

		while (ft_strlen(ary_b) != 2)
		{
			if (ary_a_cc[0] == 1 || ary_a_cc[0] == 2)
				ft_pb(ary_a_cc, ary_b);
			else
				ft_ra(ary_a_cc);
		}
		if (ary_b[0] < ary_b[1])
			ft_sb(ary_b);
		ft_sort_three(ary_a_cc);
		ft_pa(ary_a_cc, ary_b);
		ft_pa(ary_a_cc, ary_b);
	}
}