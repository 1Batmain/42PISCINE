/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 09:55:23 by bduval            #+#    #+#             */
/*   Updated: 2024/08/20 19:16:55 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	char	c;
	int		i;

	if (*str == '\0')
		return (1);
	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c < '0' || c > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void){
	char	tab[25];
	ft_str_is_numeric(tab);

}
*/
