/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:36:29 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/10 19:43:04 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(int *ary_a,int len_a)
{
	int		x;

	x = ary_a[len_a - 1];
	while (len_a > 1)
	{
		ary_a[len_a - 1] = ary_a[len_a - 2];
		len_a--;
	}
	ary_a[0] = x;
	printf("rra\n");
}

void	rrb(int *ary_b,int len_b)
{
	int		x;

	x = ary_b[len_b - 1];
	while (len_b > 1)
	{
		ary_b[len_b - 1] = ary_b[len_b - 2];
		len_b--;
	}
	ary_b[0] = x;
	printf("rrb\n");
}

void	rrr(int *ary_a, int *ary_b,int len_a,int len_b)
{
	int		x;
	int		y;

	x = ary_a[len_a - 1];
	y = ary_b[len_b - 1];
	while (len_a > 1)
	{
		ary_a[len_a - 1] = ary_a[len_a - 2];
		len_a--;
	}
	ary_a[0] = x;
	while (len_b > 1)
	{
		ary_b[len_b - 1] = ary_b[len_b - 2];
		len_b--;
	}
	ary_b[0] = y;
	printf("rrr\n");
}
