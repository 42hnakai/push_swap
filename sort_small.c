/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:31:28 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/07 23:41:33 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reduce_b_three(int *ary_x, int *ary_y, int count)
{
	max_min	max_min;

	while (ft_strlen(ary_y) > 0)
	{
		max_min = getMaxMin(ary_y);
		if (ary_y[0] == max_min.min)
		{
			pa(ary_x, ary_y);
			ra(ary_x);
		}
		else if (ary_y[0] == max_min.max)
		{
			pa(ary_x, ary_y);
			count += 1;
		}
		else
		{
			if (min_index_sign(ary_y) == 0)
				rb(ary_y);
			else if (min_index_sign(ary_y) == 1)
				rrb(ary_y);
		}
	}
	return (count);
}

void	sort_small(int *ary_x, int *ary_y, int len_b)
{
	int	count;

	if (len_b == 1)
	{
		pa(ary_x, ary_y);
		ra(ary_x);
	}
	else if (len_b == 2)
	{
		pa(ary_x, ary_y);
		pa(ary_x, ary_y);
		sort_two(ary_x);
		ra(ary_x);
		ra(ary_x);
	}
	else if (len_b <= 25)
	{
		count = reduce_b_three(ary_x, ary_y, 0);
		while (count > 0)
		{
			ra(ary_x);
			count--;
		}
	}
}
