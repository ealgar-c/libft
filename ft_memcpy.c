/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:12:33 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/04/17 18:27:52 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *restrict dst, const void *restirct src, size_t n)
{
	size_t	cont;
	char	*ptr_dest;

	ptr_dest = (char *)dst;
	
	cont = 0;
	while (cont <= n)
	{
		ptr_dest[cont] = src[cont];
		cont++;
	}
	return (dst);
}
