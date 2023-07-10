/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:20:39 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/10 21:59:35 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

max_min get_max_min(int *ary, int len)
{
	max_min max_min;
	int i;

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
