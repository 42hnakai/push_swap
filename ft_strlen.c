#include "push_swap.h"

size_t	ft_strlen(const int *str)
{
	size_t len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}