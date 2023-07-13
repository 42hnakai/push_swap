/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:58:17 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/13 18:47:42 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int malloc_size(int argc, char **argv)
{
	int i;
	int j;
	int malloc_size;
	char **ary_num;

	i = 1;
	malloc_size = 0;
	while (i < argc)
	{
		j = 0;
		ary_num = ft_split(argv[i], ' ');
		if (ary_num == NULL || ary_num[0] == NULL)
			return (-1);
		while (ary_num[j] != NULL)
		{
			free(ary_num[j]);
			j++;
		}
		free(ary_num);
		malloc_size += j;
		i++;
	}
	return (malloc_size);
}
