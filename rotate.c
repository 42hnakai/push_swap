/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:35:00 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/10 19:39:33 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(int *ary_a, int len_a)
{
	int i;
	int x;

	i = 0;
	x = ary_a[0];
	while (i + 1 < len_a)
	{
		ary_a[i] = ary_a[i + 1];
		i++;
	}
	ary_a[i] = x;
	printf("ra\n");
}

void rb(int *ary_b, int len_b)
{
	int i;
	int x;

	i = 0;
	x = ary_b[0];
	while (i + 1 < len_b)
	{
		ary_b[i] = ary_b[i + 1];
		i++;
	}
	ary_b[i] = x;
	printf("rb\n");
}

void rr(int *ary_a, int *ary_b, int len_a, int len_b)
{
	int i;
	int j;
	int x;
	int y;

	i = 0;
	j = 0;
	x = ary_a[0];
	y = ary_b[0];
	while (i + 1 < len_a)
	{
		ary_a[i] = ary_a[i + 1];
		i++;
	}
	ary_a[i] = x;
	while (j + 1 < len_b)
	{
		ary_b[j] = ary_b[j + 1];
		i++;
	}
	ary_b[j] = y;
	printf("rr\n");
}
