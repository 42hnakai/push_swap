/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordComp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:24:56 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/06 23:27:20 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*coordcomp(int *ary, int argc)
{
	int	*comp_ary;
	int	i;
	int	j;
	int	min_old;
	int	min_new;

	comp_ary = (int *)malloc(sizeof(int) * argc);
	if (!comp_ary)
		return (0);
	j = 0;
	min_old = INT_MIN;
	while (j < argc)
	{
		i = 0;
		min_new = INT_MAX;
		while (i < argc)
		{
			if (min_old < ary[i] && ary[i] < min_new)
			{
				min_new = ary[i];
				comp_ary[i] = j;
			}
			i++;
		}
		min_old = min_new;
		j++;
	}
	return (comp_ary);
}
