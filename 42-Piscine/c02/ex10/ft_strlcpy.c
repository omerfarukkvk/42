/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 04:46:36 by okavak            #+#    #+#             */
/*   Updated: 2021/11/07 11:11:59 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	c = 0;
	i = 0;
	while (src[c] != '\0')
		c++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (c);
}
/*
int	main()
{
	char	*string1;
	char	*string2;
	int	a;

	string1 = "selam";
	a = ft_strlcpy(string2,string1,3);
	printf("%s\n",string2 );
	printf("%d\n",a);
}*/
