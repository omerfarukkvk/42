/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:25:40 by okavak            #+#    #+#             */
/*   Updated: 2023/02/01 09:25:42 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtins.h"

int	mini_env(t_tools *tools, t_simple_cmds *simple_cmd)
{
	int		i;

	i = 0;
	while (tools->envp[i])
	{
		if (!ft_strncmp(simple_cmd->str[0], "export", \
			ft_strlen(simple_cmd->str[0])))
			ft_putstr_fd("declare -x ", STDOUT_FILENO);
		ft_putendl_fd(tools->envp[i], STDOUT_FILENO);
		i++;
	}
	return (EXIT_SUCCESS);
}
