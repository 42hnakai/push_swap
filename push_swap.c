/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:37:40 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/07 21:57:17 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap(int *ary_a, int *ary_b, int argc)
{
	int i;
	int *num;

	i = 0;
	if (is_sorted(ary_a) == true)
		return;
	else if(argc == 3)
		sort_two(ary_a);
	else if (argc == 4)
		sort_three(ary_a);
	else if (argc == 5)
		sort_four(ary_a, ary_b);
	else if (argc == 6)
		sort_five(ary_a, ary_b);
	else
	{
		num = (int *)calloc(1, sizeof(int) * argc / 2);
		if (num == NULL)
		{
			free(ary_a);
			free(ary_b);
			return;
		}
		num[1] = (argc - 1) / 2;
		num[0] = (argc - 1) - num[1];
		sort_many(ary_a, ary_b, 1, num, 0);
	}
}

int main(int argc, char *argv[])
{
	int *ary_a;
	int *ary_b;
	int *compAry;
	int i;

	i = 0;
	ary_a = (int *)malloc(sizeof(int) * argc);
	if (ary_a == NULL)
		return (0);
	ary_b = (int *)calloc(1, sizeof(int) * argc);
	if (ary_b == NULL)
		return (0);
	if (argc > 2)
	{
		while (argv[i + 1] != NULL)
		{
			ary_a[i] = ft_atoi(&argv[i + 1][0]); // コマンドライン引数の文字列を数字に変換&&コピー
			i++;
		}
		ary_a[i] = '\0';				  // 文字列の終わりを示すヌル文字を追加
		compAry = coordcomp(ary_a, argc); // 座標圧縮をする関数
		push_swap(compAry, ary_b, argc);  // 実際にpush_swapする
	}
	return (0);
}
