/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_many.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 23:27:09 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/10 23:48:51 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_many(t_ary_info aryinfo, int k, int *num, int flag)
{
	int i;

	i = 0;
	if (num[0] == 0)
		return;
	if (flag == 1)
		half_a(aryinfo);
	else
		num[k] = push_a_to_b(aryinfo, num[k]);
	aryinfo.len_b = num[k];
	num[k] = 0;
	while (aryinfo.len_b > 25)
	{
		num[k] = half_b(aryinfo);
		aryinfo.len_b = aryinfo.len_b - num[k];
		k = k + 1;
	}
	if (aryinfo.len_b == 0)
		return;
	else
	{
		sort_small(aryinfo);
		sort_many(aryinfo, k - 1, num, 0);
	}
}
