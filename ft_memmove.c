/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:32:33 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/04/18 15:22:33 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp;
	char	*ptr_dest;
	char	*ptr_src;
	size_t	i;

	i = -1;
	ptr_dest = (char *)dst;
	ptr_src = (char *)src;
	temp = ptr_src;
	while (i++ < len)
		temp[i] = ptr_src[i];
	i = -1;
	while (i++ < len)
		ptr_dest[i] = temp[i];
	return (dst);
}
