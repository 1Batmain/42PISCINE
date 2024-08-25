/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:55:33 by bduval            #+#    #+#             */
/*   Updated: 2024/08/19 17:19:50 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	is_alpha_num(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	if (c >= '0' && c <= '9')
		return (2);
	return (0);
}

int	is_upcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_lowcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	count;

	if ((is_alpha_num(*str) == 1) && is_lowcase(*str))
		*str -= 32;
	count = 1;
	while (*(str + count))
	{
		if (is_alpha_num(str[count]))
		{
			if (!(is_alpha_num(str[count - 1])))
			{
				if (is_lowcase(str[count]))
					str[count] -= 32;
			}
			else
			{
				if (is_upcase(str[count]))
					str[count] += 32;
			}
		}
	count++;
	}
	return (str);
}
/*
int main(int argc, char *argv[])
{
	printf("%s", ft_strcapitalize(argv[1]));
}
*/
