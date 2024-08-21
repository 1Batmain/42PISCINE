/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 09:55:23 by bduval            #+#    #+#             */
/*   Updated: 2024/08/18 10:55:27 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_uppercase(char c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	return (1);
}

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (ft_is_uppercase(str[i]))
			str[i] = str[i] + 32;
	}
	return (str);
}
