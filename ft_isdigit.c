/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:41:07 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/04/17 15:41:08 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <ctype.h>

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (c);
    return (0);
}
/*int main(void)
{
    printf("%i\n", isdigit('4'));
    printf("%i\n", isdigit('2'));
    printf("%i\n\n\n", isdigit('a'));
    printf("%i\n", ft_isdigit('4'));
    printf("%i\n", ft_isdigit('2'));
    printf("%i", ft_isdigit('f'));
    return (0);
}
*/