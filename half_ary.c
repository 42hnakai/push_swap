/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   half_ary.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:21:02 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/09 23:40:19 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	half_a(int *ary_x, int *ary_y, int len)
{
	int	i;
	int	mid;
	int	count;

	i = 0;
	count = 0;
	mid = midian(ary_x,len);
	while (i < len)
	{
		if (ary_x[0] < mid)
		{
			pb(ary_x, ary_y);
			count += 1;
		}
		else
			ra(ary_x);
		i++;
		if (count == mid)
			break ;
	}
}

int	half_b(int *ary_x, int *ary_y, int len)
{
	int	i;
	int	mid;
	int	count;

	i = 0;
	count = 0;
	mid = midian(ary_y,len);
	while (i < len)
	{
		if (ary_y[0] >= mid)
		{
			pa(ary_x, ary_y);
			count += 1;
		}
		else
			rb(ary_y);
		i++;
	}
	return (count);
}
