/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:35:00 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/12 16:28:35 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_ary_info aryinfo)
{
	int	i;
	int	x;

	i = 0;
	x = aryinfo.ary_a[0];
	while (i + 1 < aryinfo.len_a)
	{
		aryinfo.ary_a[i] = aryinfo.ary_a[i + 1];
		i++;
	}
	aryinfo.ary_a[i] = x;
	printf("ra\n");
}

void	rb(t_ary_info aryinfo)
{
	int	i;
	int	x;

	i = 0;
	x = aryinfo.ary_b[0];
	while (i + 1 < aryinfo.len_b)
	{
		aryinfo.ary_b[i] = aryinfo.ary_b[i + 1];
		i++;
	}
	aryinfo.ary_b[i] = x;
	printf("rb\n");
}

void	rr(t_ary_info aryinfo)
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = 0;
	j = 0;
	x = aryinfo.ary_a[0];
	y = aryinfo.ary_b[0];
	while (i + 1 < aryinfo.len_a)
	{
		aryinfo.ary_a[i] = aryinfo.ary_a[i + 1];
		i++;
	}
	aryinfo.ary_a[i] = x;
	while (j + 1 < aryinfo.len_b)
	{
		aryinfo.ary_b[j] = aryinfo.ary_b[j + 1];
		i++;
	}
	aryinfo.ary_b[j] = y;
	printf("rr\n");
}
