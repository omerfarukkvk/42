/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:34:28 by okavak            #+#    #+#             */
/*   Updated: 2021/11/06 18:34:32 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
/*
int	main()
{
	char	*src;
	char	*dest;

	src = "selam ben ahmet";
	printf("kaynak:%s\n",src);
	ft_strcpy(dest, src);
	printf("kopya:%s\n",dest);
}*/
