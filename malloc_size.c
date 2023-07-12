/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:27:27 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/12 17:21:30 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	malloc_size(int argc, char **ary)
{
	int		i;
	int		j;
	int		malloc_size;
	char	**ary_c;

	i = 1;
	j = 0;
	malloc_size = 0;
	while (i < argc)
	{
		j = 0;
		ary_c = ft_split(ary[i], ' ');
		if (ary_c[0] == NULL)
		{
			printf("Error\n");
			return (-1);
		}
		while (ary_c[j] != NULL)
		{
			if (!(is_validnum(ary_c[j])))
			{
				// free(ary_c);
				printf("Error\n");
				return (-1);
			}
			j++;
		}
		malloc_size += j;
		i++;
	}
	return (malloc_size);
}
