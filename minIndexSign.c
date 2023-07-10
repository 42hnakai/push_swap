/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minIndexSign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:50:15 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/10 23:38:30 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_index_sign(int *ary,int len)
{
	int		i;
	int		minindex;
	int		maxindex;
	max_min	max_min;

	i = 0;
	minindex = 0;
	maxindex = 0;
	max_min = get_max_min(ary,len);
	while (i < len)
	{
		if (ary[i] == max_min.min)
			minindex = i;
		else if (ary[i] == max_min.max)
			maxindex = i;
		i++;
	}
	if (minindex < (len - maxindex))
		return (0);
	else if (maxindex < (len - minindex))
		return (1);
	else
		return (1);
}
