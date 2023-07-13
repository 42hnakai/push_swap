/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:21:08 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/13 20:56:12 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool is_sorted(int *ary, int size)
{
	int i;

	i = 0;
	while (i + 1 < size)
	{
		if (ary[i] > ary[i + 1])
			return (false);
		else
			i++;
	}
	return (true);
}
