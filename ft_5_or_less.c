#include "ft_push_swap.h"

void	ft_5_or_less(int *ary_a_cc, int *ary_b, int argc)
{
	while (!((ary_b[0] == 1 && ary_b[1] == 2) || (ary_b[0] == 2
				&& ary_b[1] == 1)))
	{
		if (ary_a_cc[0] == 1 || ary_a_cc[0] == 2)
			ft_pb(ary_a_cc, ary_b);
		else
			ft_ra(ary_a_cc);
	}
	if (ary_b[0] < ary_b[1])
		ft_sb(ary_b);
	if (argc == 5 && (ary_a_cc[0] > ary_a_cc[1]))
		ft_sa(ary_a_cc);
	else
		ft_3(ary_a_cc);
	ft_pa(ary_a_cc, ary_b);
	ft_pa(ary_a_cc, ary_b);
}