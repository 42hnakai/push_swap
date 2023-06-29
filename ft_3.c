#include "ft_push_swap.h"

void	ft_3(int *ary_a_cc)
{
	if (ary_a_cc[0] < ary_a_cc[1] && ary_a_cc[0] < ary_a_cc[2])
	{
		if (ary_a_cc[2] < ary_a_cc[1])
		{
			ft_ra(ary_a_cc);
			ft_sa(ary_a_cc);
			ft_rra(ary_a_cc);
		}
	}
	else if (ary_a_cc[1] < ary_a_cc[0] && ary_a_cc[1] < ary_a_cc[2])
	{
		if (ary_a_cc[0] < ary_a_cc[2])
			ft_sa(ary_a_cc);
		else
			ft_ra(ary_a_cc);
	}
	else if (ary_a_cc[2] < ary_a_cc[0] && ary_a_cc[2] < ary_a_cc[1])
	{
		if (ary_a_cc[0] < ary_a_cc[1])
			ft_rra(ary_a_cc);
		else
		{
			ft_sa(ary_a_cc);
			ft_rra(ary_a_cc);
		}
	}
}