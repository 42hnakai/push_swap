#include "ft_push_swap.h"

void ft_sort_six(int *ary_a_cc, int *ary_b, int k, int *num, int flag)
{
    int p_count;
    int mid;
    int i;
    int j;
    int len_b;
    int count;

    i = 0;
    j = 0;
    len_b = 0;
    count = 0;
    if (num[0] == 0)
        return;
    if (flag == 0)
    {
        while (count != num[1] || i < (num[0] + num[1]))
        {
            if (ary_a_cc[0] <= num[1])
            {
                ft_pb(ary_a_cc, ary_b);
                count++;
            }
            else
                ft_ra(ary_a_cc);
            i++;
        }
    }
    else
    {
        while (i < num[k]) // num[i]個をary_bに移動させる
        {
            ft_pb(ary_a_cc, ary_b);
            i++;
        }
    }
    num[k] = 0;
    k = k - 1;
    len_b = ft_strlen(ary_b);
    while (len_b > 5) // ary_bの要素数が３以下になるまでpush_aする
    {
        k = k + 1;
        j = 0;
        p_count = 0;
        count = 0;
        mid = ft_midian(ary_b);
        while (j < len_b)
        {
            if (ary_b[0] >= mid)
            {
                ft_pa(ary_a_cc, ary_b);
                p_count += 1;
            }
            else
                ft_rb(ary_b);
            j++;
        }
        len_b = ft_strlen(ary_b);
        num[k] = p_count;
    }
    if (len_b == 1) // ary_bの要素数が1の時
    {
        ft_pa(ary_a_cc, ary_b);
        ft_ra(ary_a_cc);
        ft_sort_six(ary_a_cc, ary_b, k, num, 1);
    }
    else if (len_b == 2) // ary_bの要素数が2の時
    {
        if (ary_b[0] < ary_b[1])
            ft_sb(ary_b);
        ft_pa(ary_a_cc, ary_b);
        ft_pa(ary_a_cc, ary_b);
        ft_ra(ary_a_cc);
        ft_ra(ary_a_cc);
        ft_sort_six(ary_a_cc, ary_b, k, num, 1);
    }
    else if (len_b == 3) // ary_bの要素数が3の時
    {
        ft_revsort_three(ary_b);
        ft_pa(ary_a_cc, ary_b);
        ft_pa(ary_a_cc, ary_b);
        ft_pa(ary_a_cc, ary_b);
        ft_ra(ary_a_cc);
        ft_ra(ary_a_cc);
        ft_ra(ary_a_cc);
        ft_sort_six(ary_a_cc, ary_b, k, num, 1);
    }
    else if (len_b == 4)
    {
        j = 0;
        mid = ft_midian(ary_b);
        while (j < len_b)
        {
            if (ary_b[0] >= mid)
            {
                ft_pa(ary_a_cc, ary_b);
                p_count += 1;
            }
            else
                ft_rb(ary_b);
            j++;
        }
        if (ary_a_cc[0] > ary_a_cc[1])
            ft_sa(ary_a_cc);
        if (ary_b[0] < ary_b[1])
            ft_sb(ary_b);
        ft_pa(ary_a_cc, ary_b);
        ft_pa(ary_a_cc, ary_b);
        ft_ra(ary_a_cc);
        ft_ra(ary_a_cc);
        ft_ra(ary_a_cc);
        ft_ra(ary_a_cc);
        ft_sort_six(ary_a_cc, ary_b, k, num, 1);
    }
    else
    {
        ft_sort_five(ary_b, ary_a_cc, 5);
        ft_sort_six(ary_a_cc, ary_b, k, num, 1);
    }
}