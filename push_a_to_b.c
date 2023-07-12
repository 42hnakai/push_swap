/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:21:54 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/12 16:27:41 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ary_info	push_a_to_b(t_ary_info aryinfo, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (aryinfo.ary_a[0] == (aryinfo.ary_a[aryinfo.len_a - 1]) + 1)
			ra(aryinfo);
		else
			aryinfo = pb(aryinfo);
		i++;
	}
	return (aryinfo);
}
