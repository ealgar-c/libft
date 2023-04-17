#include "libft.h"

int	ft_strlen(char *str)
{
	int	letras;

	letras = 0;
	while (str[letras] != '\0')
	{
	letras++;
	}
	return (letras);
}