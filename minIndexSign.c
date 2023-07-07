/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minIndexSign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:50:15 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/07 21:59:50 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_index_sign(int *ary)
{
	int		i;
	int		minindex;
	int		maxindex;
	int		len_ary;
	max_min	max_min;

	i = 0;
	minindex = 0;
	maxindex = 0;
	len_ary = ft_strlen(ary);
	max_min = getMaxMin(ary);
	while (i < len_ary)
	{
		if (ary[i] == max_min.min)
			minindex = i;
		else if (ary[i] == max_min.max)
			maxindex = i;
		i++;
	}
	if (minindex < (len_ary - maxindex))
		return (0);
	else if (maxindex < (len_ary - minindex))
		return (1);
	else
		return (1);
}
       