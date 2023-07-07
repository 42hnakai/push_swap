/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:35:00 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/07 22:28:50 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(int *ary_a)
{
	int	i;
	int	x;

	i = 0;
	x = ary_a[0];
	while (ary_a[i + 1] != '\0')
	{
		ary_a[i] = ary_a[i + 1];
		i++;
	}
	ary_a[i] = x;
	ary_a[i + 1] = '\0';
	printf("ra\n");
}

void	rb(int *ary_b)
{
	int	i;
	int	x;

	i = 0;
	x = ary_b[0];
	while (ary_b[i + 1] != '\0')
	{
		ary_b[i] = ary_b[i + 1];
		i++;
	}
	ary_b[i] = x;
	ary_b[i + 1] = '\0';
	printf("rb\n");
}

void	rr(int *ary_a, int *ary_b)
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = 0;
	j = 0;
	x = ary_a[0];
	y = ary_b[0];
	while (ary_a[i + 1] != '\0')
	{
		ary_a[i] = ary_a[i + 1];
		i++;
	}
	ary_a[i] = x;
	ary_a[i + 1] = '\0';
	while (ary_b[j + 1] != '\0')
	{
		ary_b[j] = ary_b[j + 1];
		i++;
	}
	ary_b[j] = y;
	ary_b[j + 1] = '\0';
	printf("rr\n");
}
