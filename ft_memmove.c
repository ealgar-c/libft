/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:32:33 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/04/18 12:04:01 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*ptr_dst;
	const char	*ptr_src;

	i = 0;
	if (src == NULL && dest == NULL)
		return (0);
	ptr_dest = (char *)dst;
	ptr_src = (const char *)src;
	if (ptr_dst > ptr_src)
		while (len-- >= 0)
			ptr_dst[i] == ptr_src[i];
	else
	{
		while (i < len)
		{
			ptr_dst[i] == ptr_src[i];
			i++;
		}
	}
	return (dest);
}
