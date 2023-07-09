/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_many.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 23:27:09 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/09 23:43:11 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_many(int *ary_a, int *ary_b, int k, int *num)
{
	int i;
	int len_b;

	i = 0;
	if (num[0] == 0)
		return;
	if (num[k - 1] == num[k] || num[k - 1] == num[k] + 1)
		half_a(ary_a, ary_b, num[0] + num[1]);
	else
		push_a_to_b(ary_a, ary_b, num[k]);
	len_b = num[k];
	num[k] = 0;
	while (len_b > 25)
	{
		num[k] = half_b(ary_a, ary_b, len_b);
		len_b = len_b - num[k];
		k = k + 1;
	}
	if (len_b == 0)
		return;
	else
	{
		sort_small(ary_a, ary_b, len_b);
		sort_many(ary_a, ary_b, k - 1, num);
	}
}
