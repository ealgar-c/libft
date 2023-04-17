/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:41:02 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/04/17 15:41:03 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <ctype.h>

int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z'))
        return (c);
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