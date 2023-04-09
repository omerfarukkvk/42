/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 06:43:48 by okavak            #+#    #+#             */
/*   Updated: 2023/01/04 06:43:49 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_pwd(char *str)
{
	char	cwd[1024];

	if (!ft_strncmp(str, "pwd", 3) && getcwd(cwd, sizeof(cwd)))
	{
		printf("%s\n", cwd);
		return (1);
	}
	return (0);
}
