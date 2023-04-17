#include "libft.h"
#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void check_ft_isalpha(void)
{
    bool check;

    check = true;
    if(!(isalpha('a') == ft_isalpha('a')))
        check = false;
    if (!(isalpha('F') == ft_isalpha('F')))
        check = false;
    if(!(isalpha('4') == ft_isalpha('4')))
        check = false;
    if (check == true)
        printf("ft_isalpha: OK!\n");
    else
        printf("ft_isalpha: ERROR!\n");
}

void check_ft_isdigit(void)
{
    bool check;

    check = true;
    if(!(isdigit('a') == ft_isdigit('a')))
        check = false;
    if (!(isdigit('F') == ft_isdigit('F')))
        check = false;
    if(!(isdigit('4') == ft_isdigit('4')))
        check = false;
    if (check == true)
        printf("ft_strlen: OK!\n");
    else
        printf("ft_strlen: ERROR!\n");
}
void check_ft_isalnum(void)
{
    bool check;

    check = true;
    if(!(isalnum('a') == ft_isalnum('a')))
        check = false;
    if (!(isalnum('F') == ft_isalnum('F')))
        check = false;
    if(!(isalnum('4') == ft_isalnum('4')))
        check = false;
    if (check == true)
        printf("ft_isalnum: OK!\n");
    else
        printf("ft_isalnum: ERROR!\n");
}

void check_ft_isascii(void)
{
    bool check;

    check = true;
    if(!(isascii('a') == ft_isascii('a')))
        check = false;
    if (!(isascii('F') == ft_isascii('F')))
        check = false;
    if(!(isascii('4') == ft_isascii('4')))
        check = false;
    if(!(isascii(169) == ft_isascii(169)))
        check = false;
    if (check == true)
        printf("ft_isascii: OK!\n");
    else
        printf("ft_isascii: ERROR!\n");
}

void check_ft_isprint(void)
{
    bool check;

    check = true;
    if(!(isprint('a') == ft_isprint('a')))
        check = false;
    if (!(isprint('F') == ft_isprint('F')))
        check = false;
    if(!(isprint(' ') == ft_isprint(' ')))
        check = false;
    if(!(isprint(12) == ft_isprint(12)))
        check = false;
    if (check == true)
        printf("ft_isdigit: OK!\n");
    else
        printf("ft_isdigit: ERROR!\n");
}

void check_ft_strlen(void)
{
    bool check;

    check = true;
    if(!(strlen("hola") == ft_strlen("hola")))
        check = false;
    if (!(strlen("que tal") == ft_strlen("que tal")))
        check = false;
    if(!(strlen("\0") == ft_strlen("\0")))
        check = false;
    if (check == true)
        printf("ft_isdigit: OK!\n");
    else
        printf("ft_isdigit: ERROR!\n");
}

void check_ft_memset(void)
{
    char str1[10];
    char str2[10];
    int c;
    bool check;

    check = true;
    c = 0;
    memset(str1, 'c', 10);
    ft_memset(str2, 'c', 10);
    while(c < 10)
    {
        if(!(str1[c] == str2[c]))
        check = false;
        c++;
    }
    if (check == true)
        printf("ft_memset: OK!\n");
    else
        printf("ft_memset: ERROR!\n");
}

void check_ft_bzero(void)
{
    char str1[8];
    char str2[8];
    bool check;

    check = true;
    bzero(str1, 8);
    ft_bzero(str2, 8);
    if (memcmp(str1, str2, 8) != 0)
        check = false;
    if (check == true)
        printf("ft_bzero: OK!\n");
    else
        printf("ft_bzero: ERROR!\n");
}

int main(void)
{
    check_ft_isalpha();
    check_ft_isdigit();
    check_ft_isalnum();
    check_ft_isascii();
    check_ft_isdigit();
    check_ft_strlen();
    check_ft_memset();
    return (0);
}