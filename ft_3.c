#include "ft_push_swap.h"

void ft_3(int *ary_a_cc, int *ary_b)
{
    if (ary_a_cc[0] < ary_a_cc[1] && ary_a_cc[0] < ary_a_cc[2])
    {
        if (ary_a_cc[2] < ary_a_cc[1])
        {
            ft_pb(ary_a_cc, ary_b);
            ft_sa(ary_a_cc);
        }
    }
}