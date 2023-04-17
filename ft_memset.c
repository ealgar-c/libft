#include <stdlib.h>
#include "libft.h"
void    *ft_memset(void *s, int c, size_t n)
{
    size_t			counter;
    unsigned char	*ptr;

	counter = 0;
	ptr = (unsigned char *)s;
	while(counter < n)
	{
		ptr[counter] = (unsigned char)c;
		counter++;
	}
	return ptr;
}