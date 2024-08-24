/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:15:41 by bduval            #+#    #+#             */
/*   Updated: 2024/08/20 11:39:50 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((i < n) && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		i++;
	}
	if (i == n)
		return (0);
	return (*s1 - *s2);
}
/*
int main ()
{
	char *s1 = "rwerty";
	char *s2 = "qwerty";
	int	i;

	i = ft_strncmp(s1, s2, 6);
	printf("%d", i);
}
*/
