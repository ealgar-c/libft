#include "libft.h"
// #include <stdio.h>
// #include <ctype.h>

int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z'))
        return (1024);
    return (0);
}
/*int main(void)
{
    printf("%i\n", isalpha('a'));
    printf("%i\n", isalpha('f'));
    printf("%i\n\n\n", isalpha('1'));
    printf("%i\n", ft_isalpha('a'));
    printf("%i\n", ft_isalpha('f'));
    printf("%i", ft_isalpha('1'));
    return (0);
}
*/