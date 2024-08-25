/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_grid_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarangur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 09:38:53 by rarangur          #+#    #+#             */
/*   Updated: 2024/08/24 09:43:44 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	get_grid_size(char *str)
{
	int	i;
	int	len;

	len = ft_strlen(str);
	i = 0;
	if (len != 31)
		return (0);
	while (str[i] != '\0')
	{
		if (i % 2 == 0 && (str[i] >= '1' && str[i] <= '4'))
			i++;
		else if (i % 2 == 1 && str[i] == ' ')
			i++;
		else
			return (0);
	}
	return (4);
}
