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

t_ary_info half_a(t_ary_info aryinfo)
{
	int i;
	int mid;
	int len_a;

	i = 0;
	mid = midian(aryinfo.ary_a, aryinfo.len_a);
	len_a=aryinfo.len_a;
	while (i < len_a)
	{
		if (aryinfo.ary_a[0] < mid)
			aryinfo = pb(aryinfo); // len_bが１だけ増えてる？？
		else
			ra(aryinfo);
		i++;
		if (aryinfo.len_b == mid - 1)
			break;
	}
	return (aryinfo);
}

int half_b(t_ary_info aryinfo)
{
	int i;
	int mid;
	int count;
	int len_b;

	i = 0;
	count = 0;
	mid = midian(aryinfo.ary_b, aryinfo.len_b);
	len_b = aryinfo.len_b;
	while (i < len_b)
	{
		if (aryinfo.ary_b[0] >= mid)
		{
			aryinfo = pa(aryinfo);
			count += 1;
		}
		else
			rb(aryinfo);
		i++;
	}
	return (count);
}
