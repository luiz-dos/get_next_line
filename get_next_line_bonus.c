/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiz-dos <luiz-dos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:14:49 by luiz-dos          #+#    #+#             */
/*   Updated: 2024/06/04 11:17:48 by luiz-dos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	int			found_newline;

	if (read(fd, 0, 0) < 0 || fd >= FOPEN_MAX || fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	found_newline = 0;
	while (!found_newline && (buffer[fd][0] || read(fd, buffer[fd],
				BUFFER_SIZE) > 0))
	{
		line = ft_line(line, buffer[fd]);
		ft_handle_buffer(buffer[fd], &found_newline);
	}
	return (line);
}
