/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 09:55:23 by bduval            #+#    #+#             */
/*   Updated: 2024/08/18 10:53:27 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

char	*ft_strupcase(char	*str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (ft_is_lowercase(str[i]))
			str[i] = str[i] - 32;
	}
	return (str);
}
