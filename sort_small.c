/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:31:28 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/10 20:41:59 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int reduce_b_three(int *ary_x, int *ary_y, int len_x, int len_y, int count)
{
	max_min max_min;

	while (len_y > 0)
	{
		max_min = get_max_min(ary_y, len_y);
		if (ary_y[0] == max_min.min)
		{
			pa(ary_x, ary_y, len_x, len_y);
			len_x += 1;
			len_y -= 1;
			ra(ary_x, len_x);
		}
		else if (ary_y[0] == max_min.max)
		{
			pa(ary_x, ary_y, len_x, len_y);
			len_x += 1;
			len_y -= 1;
			count += 1;
		}
		else
		{
			if (min_index_sign(ary_y, len_y) == 0)
				rb(ary_y, len_y);
			else if (min_index_sign(ary_y, len_y) == 1)
				rrb(ary_y, len_y);
		}
	}
	return (count);
}

void sort_small(int *ary_x, int *ary_y, int len_x, int len_y)
{
	int count;

	if (len_y == 1)
	{
		pa(ary_x, ary_y, len_x, len_y);
		ra(ary_x, len_x);
	}
	else if (len_y == 2)
	{
		pa(ary_x, ary_y, len_x, len_y);
		len_x += 1;
		len_y -= 1;
		pa(ary_x, ary_y, len_x, len_y);
		len_x += 1;
		len_y -= 1;
		sort_two(ary_x);
		ra(ary_x, len_x);
		ra(ary_x, len_x);
	}
	else if (len_y <= 25)
	{
		count = reduce_b_three(ary_x, ary_y, len_x, len_y, 0);
		while (count > 0)
		{
			ra(ary_x, len_x);
			count--;
		}
	}
}
