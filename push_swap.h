/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnakai <hnakai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:30:59 by hnakai            #+#    #+#             */
/*   Updated: 2023/07/13 20:56:34 by hnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_max_min
{
	int		min;
	int		max;
}			t_max_min;

typedef struct s_ary_info
{
	int		*ary_a;
	int		*ary_b;
	int		len_a;
	int		len_b;
}			t_ary_info;

//rules files
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
void		swap(int *x, int *y);

//libft files
int			ft_isdigit(int c);
long		ft_atoi(const char *str);
size_t		ft_strlen(const char *str);
char		**ft_split(char const *s, char c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);

// sort files
void		sort_two(t_ary_info aryinfo);
void		sort_three(t_ary_info aryinfo);
void		sort_four(t_ary_info aryinfo);
void		sort_five(t_ary_info aryinfo);
void		sort_tiny(t_ary_info aryinfo);
t_ary_info	sort_small(t_ary_info aryinfo);
void		sort_many(t_ary_info aryinfo, int k, int *num, int flag);

//others
int			*compress_coords(int *ary, int size);
void		free_double_ptr(char **ary);
t_max_min	get_max_min(int *ary, int len);
t_ary_info	half_a(t_ary_info aryinfo);
int			half_b(t_ary_info aryinfo);
bool		is_validnum(char **ary);
bool		has_dups(int *ary, size_t len_ary);
bool		in_range(char **ary);
bool		is_error(int argc, char **argv);
bool		is_sorted(int *ary, int size);
// bool		malloc_a_b(t_ary_info aryinfo);
bool		malloc_a_b(t_ary_info *aryinfo);
int			malloc_size(int argc, char **ary);
int			midian(int *ary, int count);
int			min_index_sign(int *ary, int len);
t_ary_info	push_a_to_b(t_ary_info aryinfo, int n);
int			*set_ary_a(int argc, char **argv, int *ary_a);

int			reduce_b_zero(t_ary_info aryinfo, int count);

#endif