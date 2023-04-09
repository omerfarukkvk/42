/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:53:23 by okavak            #+#    #+#             */
/*   Updated: 2023/01/02 15:53:23 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_loop(void)
{
	char	*read;
	
	while (1)
	{
		read = readline(GREEN"okavak@Minishell ~ % "END);
		if (!ft_strlen(read))
			printf("\n");
		else if (!ft_echo(read) && !ft_pwd(read))
			printf(RED"%s: command not found\n"END, read);
	}
}


