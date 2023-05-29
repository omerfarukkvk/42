/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okavak <okavak@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:50:33 by okavak            #+#    #+#             */
/*   Updated: 2023/05/25 18:50:36 by okavak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	read_file(char *file, t_cub3d *cub3d)
{
	int	i;

	cub3d->fd = open(file, O_RDONLY);
	if (cub3d->fd < 0)
		return (0);
	cub3d->all = ft_read(cub3d->fd, cub3d->all);
	cub3d->all_double = ft_split(cub3d->all, '\n');
	i = 0;
	while (cub3d->all_double[i])
	{
		cub3d->all_double[i] = ft_strtrim(cub3d->all_double[i], " ");
		i++;
	}
	return (1);
}

char	*ft_read(int fd, char *left_str)
{
	char	*buff;
	int		rd_bytes;

	rd_bytes = 1;
	left_str = ft_strdup("");
	while (rd_bytes != 0)
	{
		buff = malloc(sizeof(char) * 2);
		if (!buff)
			return (NULL);
		rd_bytes = read(fd, buff, 1);
		if (rd_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[rd_bytes] = '\0';
		left_str = ft_strjoin(left_str, buff);
		free(buff);
	}
	return (left_str);
}
