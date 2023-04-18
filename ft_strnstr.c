/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:34:29 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/04/18 15:47:23 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int		a;
	int		b;
	size_t	max;

	a = 0;
	max = 0;
	if (to_find[a] == '\0')
		return (str);
	while (str[a] && max <= len)
	{
		b = 0;
		if (str[a] == to_find[b])
		{
			while (str[a + b] == to_find[b])
			{
				b++;
				if (to_find[b] == '\0')
					return (&str[a]);
			}
		}
		a++;
		max++;
	}
	return (0);
}
