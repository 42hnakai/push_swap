/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:36:29 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/07 22:35:31 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(int *ary_a)
{
	size_t	len_a;
	int		x;

	len_a = ft_strlen(ary_a);
	x = ary_a[len_a - 1];
	ary_a[len_a] = '\0';
	while (len_a > 1)
	{
		ary_a[len_a - 1] = ary_a[len_a - 2];
		len_a--;
	}
	ary_a[0] = x;
	printf("rra\n");
}

void	rrb(int *ary_b)
{
	size_t	len_b;
	int		x;

	len_b = ft_strlen(ary_b);
	x = ary_b[len_b - 1];
	ary_b[len_b] = '\0';
	while (len_b > 1)
	{
		ary_b[len_b - 1] = ary_b[len_b - 2];
		len_b--;
	}
	ary_b[0] = x;
	printf("rrb\n");
}

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
