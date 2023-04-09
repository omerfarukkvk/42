/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:16:06 by okavak            #+#    #+#             */
/*   Updated: 2021/11/12 00:22:34 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str != '\0')
	{
		c++;
		str++;
	}
	return (c);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	s;

	c = ft_strlen(dest);
	s = 0;
	while (src[s] != '\0' && s < nb)
	{
		dest[c] = src[s];
		c++;
		s++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
int main(void)
{
    char dest[4] = "ömer";
    char src[] = "faruk";
    int size = 5;
    printf("%s",ft_strncat(dest , src , size));
    return (0);
}*/
