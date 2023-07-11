/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:30:59 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/10 23:59:20 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>

typedef struct
{
	int	min;
	int	max;
} max_min;

typedef struct s_ary_info
{
	int	*ary_a;
	int *ary_b;
	int	len_a;
	int len_b;
} t_ary_info;


// push_swapフォルダ下にあるファイル内の関数を宣言
void		sa(int *ary_a);
void		sb(int *ary_b);
void		ss(int *ary_a, int *ary_b);
t_ary_info	pa(t_ary_info aryinfo);
t_ary_info	pb(t_ary_info aryinfo);
void		ra(t_ary_info aryinfo);
void		rb(t_ary_info aryinfo);
void		rr(t_ary_info aryinfo);
void		rra(t_ary_info aryinfo);
void		rrb(t_ary_info aryinfo);
void		rrr(t_ary_info aryinfo);

// libft files
int		ft_isdigit(int c);
int		ft_atoi(const char *str);
size_t	ft_strlen_char(const char *str);
size_t	ft_strlen(const int *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	**ft_split(char const *s, char c);

int	*coordcomp(int *ary, int count);

// sort files
void	sort_two(t_ary_info aryinfo);
void	sort_three(t_ary_info aryinfo);
void	sort_four(t_ary_info aryinfo);
void	sort_five(t_ary_info aryinfo);

void		sort_tiny(t_ary_info aryinfo);
t_ary_info	sort_small(t_ary_info aryinfo);
void		sort_many(t_ary_info aryinfo, int k, int *num,int flag);

int		midian(int *ary,int count);
max_min	get_max_min(int *ary,int len);
int		min_index_sign(int *ary,int len);
bool	is_sorted(int *ary);
int		reduce_b_zero(t_ary_info aryinfo, int count);
void	swap(int *x, int *y);
t_ary_info	half_a(t_ary_info aryinfo);
int		half_b(t_ary_info aryinfo);
t_ary_info	push_a_to_b(t_ary_info aryinfo, int n);

bool	has_dups(int *ary);
bool	is_validnum(char *ary);
#endif