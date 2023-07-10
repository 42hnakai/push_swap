/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   half_ary.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:21:02 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/10 23:58:10 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void half_a(t_ary_info aryinfo)
{
	int i;
	int mid;

	i = 0;
	mid = midian(aryinfo.ary_a, aryinfo.len_a);
	while (i < aryinfo.len_a)
	{
		if (aryinfo.ary_a[0] < mid)
			pb(aryinfo); // len_bが１だけ増えてる？？
		else
			ra(aryinfo);
		i++;
		if (aryinfo.len_b == mid - 1)
			break;
	}
}

int half_b(t_ary_info aryinfo)
{
	int i;
	int mid;
	int count;

	i = 0;
	count = 0;
	mid = midian(aryinfo.ary_b, aryinfo.len_b);
	while (i < aryinfo.len_b)
	{
		if (aryinfo.ary_y[0] >= mid)
		{
			pa(aryinfo);
			count += 1;
		}
		else
			rb(aryinfo);
		i++;
	}
	return (count);
}
