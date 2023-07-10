/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:21:54 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/10 18:59:45 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int push_a_to_b(int *ary_a, int *ary_b, int n)
{
	int i;
	int len_b;

	i = 0;
	len_b = 0;
	while (i < n)
	{
		if (ary_a[0] == (ary_a[ft_strlen(ary_a) - 1] + 1))
			ra(ary_a);
		else
		{
			pb(ary_a, ary_b);
			len_b += 1;
		}
		i++;
	}
	return (len_b);
}
