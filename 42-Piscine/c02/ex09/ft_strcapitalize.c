/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 00:00:37 by okavak            #+#    #+#             */
/*   Updated: 2021/11/08 23:45:30 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (str[c] != '\0')
	{
		if (i == 0 && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] -= 'a' - 'A';
			i++;
		}
		else if (i > 0 && (str[c] >= 'A' && str[c] <= 'Z'))
			str[c] += 'a' - 'A';
		else if ((str[c] < '0') || (str[c] > '9' && str[c] < 'A'))
			i = 0;
		else if ((str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
			i = 0;
		else
			i++;
		c++;
	}
	return (str);
}
/*
int main()
{
	char deger[]="salut, coMMENt tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *p=ft_strcapitalize(deger);
	printf("%s\n",deger);
}*/
