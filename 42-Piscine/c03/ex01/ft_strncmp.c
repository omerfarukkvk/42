/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:14:50 by okavak            #+#    #+#             */
/*   Updated: 2021/11/12 00:20:39 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while ((s1[a] != '\0' || s2[a] != '\0') && a < n)
	{
		if (s1[a] == s2[a])
			a++;
		else if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}
	return (0);
}
/*
int main(void)
{
		char a[] = "ömer faruk";
		char b[]= "kavakkkk";
		printf("%d",ft_strncmp(a,b,5));
}*/
