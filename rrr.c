/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:22:25 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/06 23:26:47 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(int *ary_a, int *ary_b)
{
	size_t	len_a;
	size_t	len_b;
	int		x;
	int		y;

	len_a = ft_strlen(ary_a);
	len_b = ft_strlen(ary_b);
	x = ary_a[len_a - 1];
	y = ary_b[len_b - 1];
	ary_a[len_a] = '\0';
	ary_b[len_b] = '\0';
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
