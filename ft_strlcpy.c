/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:57:03 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/11 19:31:21 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
	if (size < 1)
		return (res);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}

/*
#include <stdio.h>
int	main(void)
{
	char	dest[50];
	char	*src;
	int	size;

	src = "No se muy bien";
	size = 10;
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%s\n\n", dest);
}
*/	
