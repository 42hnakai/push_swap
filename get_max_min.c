/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:20:39 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/12 16:39:36 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_max_min	get_max_min(int *ary, int len)
{
	t_max_min	max_min;
	int			i;

	i = 0;
	max_min.min = ary[0];
	max_min.max = ary[0];
	while (i < len)
	{
		if (ary[i] < max_min.min)
			max_min.min = ary[i];
		else if (ary[i] > max_min.max)
			max_min.max = ary[i];
		i++;
	}
	return (max_min);
}
