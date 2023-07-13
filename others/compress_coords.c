/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compress_coords.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:50:42 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/13 21:04:29 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int *compress_coords(int *ary, int size)
{
	int i;
	int j;
	int count;
	int *comp_ary;

	comp_ary = (int *)malloc(sizeof(int) * size);
	// if (comp_ary == NULL)
	// 	return (0);
	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (ary[j] < ary[i])
				count++;
			j++;
		}
		comp_ary[i] = count + 1;
		count = 0;
		i++;
	}
	free(ary);
	return (comp_ary);
}
