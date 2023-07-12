/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:37:40 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/12 16:58:59 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_ary_info aryinfo)
{
	int	*num;

	if (has_dups(aryinfo.ary_a))
	{
		printf("Error\n");
		return ;
	}
	if (is_sorted(aryinfo.ary_a) == true)
		return ;
	else if (aryinfo.len_a <= 5)
		sort_tiny(aryinfo);
	else
	{
		num = (int *)malloc(sizeof(int) * aryinfo.len_a);
		if (num == NULL)
			return ;
		else
		{
			num[1] = aryinfo.len_a / 2;
			num[0] = aryinfo.len_a - num[1];
			sort_many(aryinfo, 1, num, 1);
			free(num);
		}
	}
}

// __attribute__((destructor)) static void destructor()
// {
// 	system("leaks -q push_swap");
// }

int	main(int argc, char *argv[])
{
	t_ary_info	aryinfo;
	int			size;
	int			*comp_ary;

	size = malloc_size(argc, argv);
	if (size == -1)
		return (0);
	aryinfo.ary_a = (int *)malloc(sizeof(int) * size);
	if (aryinfo.ary_a == NULL)
		return (0);
	aryinfo.ary_b = (int *)malloc(sizeof(int) * size);
	if (aryinfo.ary_b == NULL)
	{
		free(aryinfo.ary_a);
		return (0);
	}
	aryinfo.ary_a = get_ary_a(argv, aryinfo.ary_a);
	comp_ary = coordcomp(aryinfo.ary_a, size);
	aryinfo.ary_a = comp_ary;
	aryinfo.len_a = size;
	aryinfo.len_b = 0;
	push_swap(aryinfo);
	free(aryinfo.ary_a);
	free(aryinfo.ary_b);
	return (0);
}
