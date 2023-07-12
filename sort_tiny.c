/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tiny.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:50:58 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/12 16:38:40 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_ary_info aryinfo)
{
	if (aryinfo.ary_a[0] > aryinfo.ary_a[1])
		sa(aryinfo.ary_a);
}

void	sort_three(t_ary_info af)
{
	if ((af.ary_a[0] < af.ary_a[1]) && (af.ary_a[0] < af.ary_a[2])
		&& (af.ary_a[2] < af.ary_a[1]))
	{
		ra(af);
		sa(af.ary_a);
		rra(af);
	}
	else if (af.ary_a[1] < af.ary_a[0] && af.ary_a[1] < af.ary_a[2])
	{
		if (af.ary_a[0] < af.ary_a[2])
			sa(af.ary_a);
		else
			ra(af);
	}
	else if (af.ary_a[2] < af.ary_a[0] && af.ary_a[2] < af.ary_a[1])
	{
		if (af.ary_a[0] < af.ary_a[1])
			rra(af);
		else
		{
			sa(af.ary_a);
			rra(af);
		}
	}
}

void	sort_four(t_ary_info aryinfo)
{
	t_max_min	max_min;

	max_min = get_max_min(aryinfo.ary_a, aryinfo.len_a);
	while (aryinfo.len_a > 3)
	{
		if (aryinfo.ary_a[0] == max_min.min)
			aryinfo = pb(aryinfo);
		else
			ra(aryinfo);
	}
	sort_three(aryinfo);
	aryinfo = pa(aryinfo);
}

void	sort_five(t_ary_info aryinfo)
{
	t_max_min	max_min;

	max_min = get_max_min(aryinfo.ary_a, aryinfo.len_a);
	while (aryinfo.len_a > 3)
	{
		if (aryinfo.ary_a[0] == max_min.min || aryinfo.ary_a[0] == max_min.max)
			aryinfo = pb(aryinfo);
		else
			ra(aryinfo);
	}
	sort_three(aryinfo);
	if (aryinfo.ary_b[0] == max_min.min)
	{
		aryinfo = pa(aryinfo);
		aryinfo = pa(aryinfo);
		ra(aryinfo);
	}
	else
	{
		aryinfo = pa(aryinfo);
		ra(aryinfo);
		aryinfo = pa(aryinfo);
	}
}

void	sort_tiny(t_ary_info aryinfo)
{
	if (aryinfo.len_a == 2)
		sort_two(aryinfo);
	else if (aryinfo.len_a == 3)
		sort_three(aryinfo);
	else if (aryinfo.len_a == 4)
		sort_four(aryinfo);
	else if (aryinfo.len_a == 5)
		sort_five(aryinfo);
}
