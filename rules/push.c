/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:33:40 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/13 18:26:52 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_ary_info	pa(t_ary_info aryinfo)
{
	int	i;

	i = aryinfo.len_a;
	if (aryinfo.len_b != 0)
	{
		while (i > 0)
		{
			aryinfo.ary_a[i] = aryinfo.ary_a[i - 1];
			i--;
		}
		aryinfo.ary_a[0] = aryinfo.ary_b[0];
		i = 0;
		while (i + 1 < aryinfo.len_b)
		{
			aryinfo.ary_b[i] = aryinfo.ary_b[i + 1];
			i++;
		}
	}
	aryinfo.len_a += 1;
	aryinfo.len_b -= 1;
	printf("pa\n");
	return (aryinfo);
}

t_ary_info	pb(t_ary_info aryinfo)
{
	int	i;

	i = aryinfo.len_b;
	if (aryinfo.len_a != 0)
	{
		while (i > 0)
		{
			aryinfo.ary_b[i] = aryinfo.ary_b[i - 1];
			i--;
		}
		aryinfo.ary_b[0] = aryinfo.ary_a[0];
		i = 0;
		while (i + 1 < aryinfo.len_a)
		{
			aryinfo.ary_a[i] = aryinfo.ary_a[i + 1];
			i++;
		}
	}
	aryinfo.len_a -= 1;
	aryinfo.len_b += 1;
	printf("pb\n");
	return (aryinfo);
}
