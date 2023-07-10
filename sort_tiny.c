/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tiny.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:50:58 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/10 20:35:25 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_two(int *ary)
{
	if (ary[0] > ary[1])
		sa(ary);
}

void sort_three(int *ary, int len_x)
{
	if ((ary[0] < ary[1]) && (ary[0] < ary[2]) && (ary[2] < ary[1]))
	{
		ra(ary, len_x);
		sa(ary);
		rra(ary, len_x);
	}
	else if (ary[1] < ary[0] && ary[1] < ary[2])
	{
		if (ary[0] < ary[2])
			sa(ary);
		else
			ra(ary, len_x);
	}
	else if (ary[2] < ary[0] && ary[2] < ary[1])
	{
		if (ary[0] < ary[1])
			rra(ary, len_x);
		else
		{
			sa(ary);
			rra(ary, len_x);
		}
	}
}

void sort_four(int *ary_x, int *ary_y, int len_x, int len_y)
{
	max_min max_min;

	max_min = get_max_min(ary_x, len_x);
	while (len_x > 3)
	{
		if (ary_x[0] == max_min.min)
		{
			pb(ary_x, ary_y, len_x, len_y);
			len_x -= 1;
			len_y += 1;
		}
		else
			ra(ary_x, len_x);
	}
	sort_three(ary_x, len_x);
	pa(ary_x, ary_y, len_x, len_y);
	len_x += 1;
	len_y -= 1;
}

void sort_five(int *ary_x, int *ary_y, int len_x, int len_y)
{
	max_min max_min;

	max_min = get_max_min(ary_x, len_x);
	while (len_x > 3)
	{
		if (ary_x[0] == max_min.min || ary_x[0] == max_min.max)
		{
			pb(ary_x, ary_y, len_x, len_y);
			len_x -= 1;
			len_y += 1;
		}
		else
			ra(ary_x, len_x);
	}
	sort_three(ary_x, len_x);
	if (ary_y[0] == max_min.min)
	{
		pa(ary_x, ary_y, len_x, len_y);
		len_x += 1;
		len_y -= 1;
		pa(ary_x, ary_y, len_x, len_y);
		len_x += 1;
		len_y -= 1;
		ra(ary_x, len_x);
	}
	else
	{
		pa(ary_x, ary_y, len_x, len_y);
		len_x += 1;
		len_y -= 1;
		ra(ary_x, len_x);
		pa(ary_x, ary_y, len_x, len_y);
		len_x += 1;
		len_y -= 1;
	}
}

void sort_tiny(int *ary_x, int *ary_y, int len_x, int len_y)
{
	if (len_x == 2)
		sort_two(ary_x);
	else if (len_x == 3)
		sort_three(ary_x, len_x);
	else if (len_x == 4)
		sort_four(ary_x, ary_y, len_x, len_y);
	else if (len_x == 5)
		sort_five(ary_x, ary_y, len_x, len_y);
}
