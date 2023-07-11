/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordcomp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:24:56 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/11 21:54:06 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*coordcomp(int *ary, int argc)
{
	int	i;
	int	j;
	int	count;
	int	*comp_ary;

	comp_ary = (int *)malloc(sizeof(int) * argc);
	if (!comp_ary)
		return (0);
	i = 0;
	count = 0;
	while (i < argc)
	{
		j = 0;
		while (j < argc)
		{
			if (ary[j] < ary[i])
				count++;
			j++;
		}
		comp_ary[i] = count + 1;
		count = 0;
		i++;
	}
	return (comp_ary);
}
