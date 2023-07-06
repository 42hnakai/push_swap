/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   midian.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:29:34 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/06 23:31:24 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	midian(int *ary)
{
	int	i;
	int	min;
	int	len;

	i = 0;
	min = ary[i];
	len = ft_strlen(ary);
	while (i < len)
	{
		if (ary[i] < min)
			min = ary[i];
		i++;
	}
	return (min + len / 2);
}
