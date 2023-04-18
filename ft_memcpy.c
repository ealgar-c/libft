/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:12:33 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/04/18 10:53:07 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restirct src, size_t n)
{
	size_t	cont;
	char	*ptr_dest;
	char	*ptr_src;

	ptr_dest = (char *)dst;
	ptr_src = (char *)src;
	cont = 0;
	if (!src && !dst)
		return (0);
	while (cont <= n)
	{
		ptr_dest[cont] = ptr_src[cont];
		cont++;
	}
	return (dst);
}
