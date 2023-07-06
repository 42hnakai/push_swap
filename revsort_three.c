#include "push_swap.h"

void revsort_three(int *ary_b)
{
	if (ary_b[0] < ary_b[1] && ary_b[0] < ary_b[2])
	{
		if (ary_b[1] < ary_b[2])
		{
			sb(ary_b);
			rrb(ary_b);
		}
		else
			rb(ary_b);
	}
	else if (ary_b[1] < ary_b[0] && ary_b[1] < ary_b[2])
	{
		if (ary_b[0] < ary_b[2])
			rrb(ary_b);
		else
		{
			rb(ary_b);
			sb(ary_b);
			rrb(ary_b);
		}
	}
	else if (ary_b[2] < ary_b[0] && ary_b[2] < ary_b[1])
	{
		if (ary_b[0] < ary_b[1])
			sb(ary_b);
		else
			return;
	}
}