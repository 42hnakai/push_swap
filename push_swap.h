#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
    int min;
    int max;
} max_min;

// push_swapフォルダ下にあるファイル内の関数を宣言
void sa(int *ary_a);
void sb(int *ary_b);
void ss(int *ary_a, int *ary_b);
void pa(int *ary_a, int *ary_b);
void pb(int *ary_a, int *ary_b);
void ra(int *ary_a);
void rb(int *ary_b);
void rr(int *ary_a, int *ary_b);
void rra(int *ary_a);
void rrb(int *ary_b);
void rrr(int *ary_a, int *ary_b);

// libft files
int ft_isdigit(int c);
int ft_atoi(const char *str);
size_t ft_strlen(const int *str);

int *coordcomp(int *ary, int argc);

// sort files
void sort_two(int *ary);
void sort_three(int *ary_a_cc);
void revsort_three(int *ary_b);
void sort_five(int *ary_a, int *ary_b);
void sort_four(int *ary_x, int *ary_y);
void sort_many(int *ary_a, int *ary_b, int k, int *num, int flag);
void sort_small(int *ary_x, int *ary_y,int len_b);
int midian(int *ary);
max_min getMaxMin(int *ary);
int min_index_sign(int *ary);
bool is_sorted(int *ary);
int reduce_b_three(int *ary_x, int *ary_y);
void swap(int *x, int *y);
void half_a(int *ary_x, int *ary_y, int len);
int half_b(int *ary_x, int *ary_y, int len);
void push_a_to_b(int *ary_a, int *ary_b, int n);

#endif