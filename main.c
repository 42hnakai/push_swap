/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:37:40 by hnakai            #+#    #+#             */
/*   Updated: 2023/06/28 16:28:40 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void ft_push_swap(int *ary_a_cc, int *ary_b, int argc)
{
	int i;
	int *num;

	i = 0;
	while (ary_a_cc[i + 1] != '\0')
	{
		if (ary_a_cc[i] > ary_a_cc[i + 1])
			break;
		else
			i++;
		if (ary_a_cc[i + 1] == '\0')
			return;
	}
	if (argc == 4) // the number of argument is 3
		ft_sort_three(ary_a_cc);
	else if (argc <= 6) // the number of argument is 5 or less
		ft_sort_five(ary_a_cc, ary_b, argc - 1);
	else // the number of argument is more than 6
	{
		num = (int *)calloc(1, sizeof(int) * argc / 2);
		num[1] = (argc - 1) / 2;
		num[0] = (argc - 1) - num[1];
		ft_sort_x(ary_a_cc, ary_b, 1, num, 0);
	}
}

int main(int argc, char *argv[])
{
	int *ary_a;
	int *ary_b;
	int *ary_a_cc;
	int i;

	i = 0;
	ary_a = (int *)malloc(sizeof(int) * argc);
	if (ary_a == NULL)
		return (0);
	ary_b = (int *)calloc(1, sizeof(int) * argc);
	if (ary_b == NULL)
		return (0);
	if (argc > 3)
	{
		while (argv[i + 1] != NULL)
		{
			ary_a[i] = ft_atoi(&argv[i + 1][0]); // コマンドライン引数の文字列を数字に変換&&コピー
			i++;
		}
		ary_a[i] = '\0';								// 文字列の終わりを示すヌル文字を追加
		ary_a_cc = ft_compressCoordinates(ary_a, argc); // 座標圧縮をする関数
		ft_push_swap(ary_a_cc, ary_b, argc);			// 実際にpush_swapする
	}
	return (0);
}
