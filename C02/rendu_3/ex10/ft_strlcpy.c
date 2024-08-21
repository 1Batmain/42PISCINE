/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:37:43 by bduval            #+#    #+#             */
/*   Updated: 2024/08/20 19:28:58 by bduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*(str + size))
	{
		size++;
	}
	return (size);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	i = 0;
	while (*(src + i) && i < (size - 1))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

/*
int main(int argc, char *argv[])
{	
	char tab1[] = "SIIISIIIS0000000000000000ss";
	char tab2[25];
	int ret;

	ret = ft_strlcpy(tab2, tab1, 25);
	printf("string 1 : %s\nstring 2 : %s\nretourne : %u", tab1, tab2, ret);
}
*/
