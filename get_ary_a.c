/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_ary_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:27:09 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/12 16:32:20 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*get_ary_a(char **ary, int *ary_a)
{
	int		i;
	int		j;
	int		k;
	char	**ary_c;

	i = 1;
	j = 0;
	k = 0;
	while (ary[i] != NULL)
	{
		while (ary_c[j] != NULL)
		{
			ary_c = ft_split(ary[i], ' ');
			ary_a[k] = ft_atoi(ary_c[j]);
			k++;
			j++;
		}
		i++;
		j = 0;
	}
	return (ary_a);
}
