/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   midian.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:29:34 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/09 23:39:54 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	midian(int *ary,int count)
{
	int	i;
	int	min;
	i = 0;
	min = ary[i];
	while (i < count)
	{
		if (ary[i] < min)
			min = ary[i];
		i++;
	}
	return (min + count / 2);
}
