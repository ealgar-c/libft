/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:00:11 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/04/18 15:46:38 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;
	size_t			a;

	a = 0;
	ptr_s1 = (unsigned char)s1;
	ptr_s2 = (unsigned char)s2;
	while (ptr_s1[a] && ptr_s2[a] && ptr_s1[a] == ptr_s2[a])
		a++;
	return (ptr_s1[a] - ptr_s2[a]);
}
