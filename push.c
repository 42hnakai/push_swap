/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:33:40 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/10 20:40:58 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pa(int *ary_a, int *ary_b, int len_a, int len_b)
{
	int i;

	i = len_a;
	if (len_b != 0)
	{
		while (i > 0)
		{
			ary_a[i] = ary_a[i - 1];
			i--;
		}
		ary_a[0] = ary_b[0];
		i = 0;
		while (i + 1 < len_b)
		{
			ary_b[i] = ary_b[i + 1];
			i++;
		}
	}
	printf("pa\n");
}

void pb(int *ary_a, int *ary_b, int len_a, int len_b)
{
	int i;

	i = len_b;
	if (len_a != 0)
	{
		while (i > 0)
		{
			ary_b[i] = ary_b[i - 1];
			i--;
		}
		ary_b[0] = ary_a[0];
		i = 0;
		while (i + 1 < len_a)
		{
			ary_a[i] = ary_a[i + 1];
			i++;
		}
	}
	printf("pb\n");
}
