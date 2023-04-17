#include <stdlib.h>
#include "string.h"

void ft_bzero(void *s, size_t n)
{
	size_t			counter;
	unsigned char	*ptr;

	counter = 0;
	ptr = (unsigned char *)s;
	if(n == 0)
		return;
	while(counter < n)
	{
		ptr[counter] = 'a';
		counter++;
	}
}