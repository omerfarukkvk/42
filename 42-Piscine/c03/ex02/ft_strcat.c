/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:15:25 by okavak            #+#    #+#             */
/*   Updated: 2021/11/12 00:21:13 by okavak           ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	c;
	int	s;

	c = ft_strlen(dest);
	s = 0;
	while (src[s] != '\0')
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
		char a[30] = "ömer";
		char b[]=" faruk";
		printf("%s",ft_strcat(a,b));
}*/
