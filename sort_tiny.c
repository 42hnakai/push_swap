/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tiny.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:50:58 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/07 23:49:14 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(int *ary)
{
	if (ary[0] > ary[1])
		sa(ary);
}

void	sort_three(int *ary)
{
	if ((ary[0] < ary[1]) && (ary[0] < ary[2]) && (ary[2] < ary[1]))
	{
		ra(ary);
		sa(ary);
		rra(ary);
	}
	else if (ary[1] < ary[0] && ary[1] < ary[2])
	{
		if (ary[0] < ary[2])
			sa(ary);
		else
			ra(ary);
	}
	else if (ary[2] < ary[0] && ary[2] < ary[1])
	{
		if (ary[0] < ary[1])
			rra(ary);
		else
		{
			sa(ary);
			rra(ary);
		}
	}
}

void	sort_four(int *ary_x, int *ary_y)
{
	max_min	max_min;

	max_min = get_max_min(ary_x);
	while (ft_strlen(ary_x) > 3)
	{
		if (ary_x[0] == max_min.min)
			pb(ary_x, ary_y);
		else
			ra(ary_x);
	}
	sort_three(ary_x);
	pa(ary_x, ary_y);
}

void	sort_five(int *ary_x, int *ary_y)
{
	max_min	max_min;

	max_min = get_max_min(ary_x);
	while (ft_strlen(ary_x) > 3)
	{
		if (ary_x[0] == max_min.min || ary_x[0] == max_min.max)
			pb(ary_x, ary_y);
		else
			ra(ary_x);
	}
	sort_three(ary_x);
	if (ary_y[0] == max_min.min)
	{
		pa(ary_x, ary_y);
		pa(ary_x, ary_y);
		ra(ary_x);
	}
	else
	{
		pa(ary_x, ary_y);
		ra(ary_x);
		pa(ary_x, ary_y);
	}
}

void	sort_tiny(int *ary_x, int *ary_y, int len)
{
	if (len == 2)
		sort_two(ary_x);
	else if (len == 3)
		sort_three(ary_x);
	else if (len == 4)
		sort_four(ary_x, ary_y);
	else if (len == 5)
		sort_five(ary_x, ary_y);
}
