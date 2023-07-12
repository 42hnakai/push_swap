/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:36:29 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/12 16:28:34 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_ary_info aryinfo)
{
	int	x;
	int	i;

	i = aryinfo.len_a;
	x = aryinfo.ary_a[i - 1];
	while (i - 1 > 0)
	{
		aryinfo.ary_a[i - 1] = aryinfo.ary_a[i - 2];
		i--;
	}
	aryinfo.ary_a[0] = x;
	printf("rra\n");
}

void	rrb(t_ary_info aryinfo)
{
	int	x;
	int	i;

	i = aryinfo.len_b;
	x = aryinfo.ary_b[i - 1];
	while (i > 1)
	{
		aryinfo.ary_b[i - 1] = aryinfo.ary_b[i - 2];
		i--;
	}
	aryinfo.ary_b[0] = x;
	printf("rrb\n");
}

void	rrr(t_ary_info aryinfo)
{
	int	x;
	int	y;
	int	i;
	int	j;

	i = aryinfo.len_a;
	j = aryinfo.len_b;
	x = aryinfo.ary_a[i - 1];
	y = aryinfo.ary_b[j - 1];
	while (i > 1)
	{
		aryinfo.ary_a[i - 1] = aryinfo.ary_a[i - 2];
		i--;
	}
	aryinfo.ary_a[0] = x;
	while (j > 1)
	{
		aryinfo.ary_b[j - 1] = aryinfo.ary_b[j - 2];
		j--;
	}
	aryinfo.ary_b[0] = y;
	printf("rrr\n");
}
