/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 06:43:40 by okavak            #+#    #+#             */
/*   Updated: 2023/01/04 06:43:41 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"


int	ft_echo(char *str)
{
	if (!ft_strncmp(str, "echo -n", 7))
	{
		str += 8;
		printf("%s", str);
		return (1);
	}
	else if (!ft_strncmp(str, "echo", 4) && str[5] == '\0')
	{
		printf("\n");
		return (1);
	}
	else if (!ft_strncmp(str, "echo", 4))
	{
		str += 5;
		printf("%s\n", str);
		return (1);
	}
	return (0);
}
