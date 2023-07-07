/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getMaxMin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:20:39 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/07 23:48:13 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

max_min	get_max_min(int *ary)
{
	max_min	max_min;
	int		i;
	int		n;

	i = 0;
	n = ft_strlen(ary);
	max_min.min = ary[0];
	max_min.max = ary[0];
	while (i < n)
	{
		if (ary[i] < max_min.min)
			max_min.min = ary[i];
		else if (ary[i] > max_min.max)
			max_min.max = ary[i];
		i++;
	}
	return (max_min);
}
