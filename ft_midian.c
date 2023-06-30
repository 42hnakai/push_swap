#include "ft_push_swap.h"

int ft_midian(int *ary)
{
    int min;
    int i;
    int len;
    i = 0;
    min = ary[i];
    len = ft_strlen(ary);
    while (i < len)
    {
        if (ary[i] < min)
            min = ary[i];
        i++;
    }
    return (min + len / 2);
}