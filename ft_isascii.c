#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c)
{
    if(c >= 0 && c <= 127)
        return (1);
    return (0);
}

/*int main(void)
{
    printf("%i\n", isascii('4'));
    printf("%i\n", isascii('a'));
    printf("%i\n\n\n", isascii(130));
    printf("%i\n", ft_isascii('4'));
    printf("%i\n", ft_isascii('2'));
    printf("%i", ft_isascii(130));
    return (0);
}*/