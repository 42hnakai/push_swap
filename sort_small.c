/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:31:28 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/10 23:39:31 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int reduce_b_zero(t_ary_info aryinfo, int count)
{
	max_min max_min;

	while (aryinfo.len_b > 0)
	{
		max_min = get_max_min(aryinfo.ary_b, aryinfo.len_b);
		if (aryinfo.ary_b[0] == max_min.min)
		{
			pa(aryinfo);
			ra(aryinfo);
		}
		else if (aryinfo.ary_b[0] == max_min.max)
		{
			pa(aryinfo);
			count += 1;
		}
		else
		{
			if (min_index_sign(aryinfo.ary_b,aryinfo.len_b) == 0)
				rb(aryinfo);
			else if (min_index_sign(aryinfo.ary_b,aryinfo.len_b) == 1)
				rrb(aryinfo);
		}
	}
	return (count);
}

void sort_small(t_ary_info aryinfo)
{
	int count;

	if (aryinfo.len_b == 1)
	{
		pa(aryinfo);
		ra(aryinfo);
	}
	else if (aryinfo.len_b == 2)
	{
		pa(aryinfo);
		pa(aryinfo);
		sort_two(aryinfo);
		ra(aryinfo);
		ra(aryinfo);
	}
	else if (aryinfo.len_b <= 25)
	{
		count = reduce_b_zero(aryinfo, 0);
		while (count > 0)
		{
			ra(aryinfo);
			count--;
		}
	}
}
