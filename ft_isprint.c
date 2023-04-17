/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:41:10 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/04/17 15:41:11 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int ft_isprint(int c)
{
    if(c >= 32 && c <= 127)
        return (16384);
    return (0);
}

/*int main(void)
{
    printf("%i\n", isprint('4'));
    printf("%i\n", isprint(11));
    printf("%i\n\n\n", isprint(' '));
    printf("%i\n", ft_isprint('4'));
    printf("%i\n", ft_isprint(11));
    printf("%i", ft_isprint(' '));
}*/