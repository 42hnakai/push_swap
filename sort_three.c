/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:50:58 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/06 21:59:07 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(int *ary)
{
	if ((ary[0] < ary[1]) && (ary[0] < ary[2]) && (ary[2] < ary[1]))
	{
		ra(ary);
		sa(ary);
		rra(ary);
	}
	else if (ary[1] < ary[0] && ary[1] < ary[2])
	{
		if (ary[0] < ary[2])
			sa(ary);
		else
			ra(ary);
	}
	else if (ary[2] < ary[0] && ary[2] < ary[1])
	{
		if (ary[0] < ary[1])
			rra(ary);
		else
		{
			sa(ary);
			rra(ary);
		}
	}
}
