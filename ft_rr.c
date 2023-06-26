/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:02:25 by hnakai            #+#    #+#             */
/*   Updated: 2023/06/27 00:26:35 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_rr(int *ary_a, int *ary_b)
{
	int i = 0;
	int x;
	x = ary_a[0];
	while (ary_a[i + 1] != '\0')
	{
		ary_a[i] = ary_a[i + 1];
		i++;
	}
	ary_a[i] = x;
	ary_a[i + 1] = '\0';
	int j = 0;
	int y;
	y = ary_b[0];
	while (ary_b[j + 1] != '\0')
	{
		ary_b[j] = ary_b[j + 1];
		i++;
	}
	ary_b[j] = y;
	ary_b[j + 1] = '\0';
	printf("rr\n");
}