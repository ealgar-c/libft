/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 20:54:44 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/12 22:18:25 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	if (n == 0)
		return (0);
	while (s1[a] == s2[a] && (a < n - 1) && s1[a])
		a++;
	return (s1[a] - s2[a]);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*s1;
	char	*s2;
	int		res;

	s1 = "no se que poner iqui";
	s2 = "no se que poner here";

	res = ft_strncmp(s1, s2, 20);
	if (res < 0)
		printf("El s1 es menor que s2");
	else if (res > 0)
		printf("El s1 es mayor que s2");
	else
		printf("s1 y s2 son iguales");
	return (0);
}*/
