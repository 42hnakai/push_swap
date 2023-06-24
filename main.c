/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:37:40 by hnakai            #+#    #+#             */
/*   Updated: 2023/06/23 15:02:44 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char *argv[])
{
		char ary_a[4];
		char ary_b[4];

	if (argc > 3)
	{
		ary_a[0] = argv[1][0]; // 最初の引数の最初の文字をコピー
		ary_a[1] = argv[2][0]; // 2番目の引数の最初の文字をコピー
		ary_a[2] = argv[3][0]; // 3番目の引数の最初の文字をコピー
		ary_a[3] = '\0';       // 文字列の終わりを示すヌル文字を追加
		printf("Before swap: %s\n", ary_a);
		printf("Before swap: %s\n", ary_b);
		ft_sb(ary_a);
		printf("After swap: %s\n", ary_a);
		printf("After swap: %s\n", ary_b);
	}
	return (0);
}
