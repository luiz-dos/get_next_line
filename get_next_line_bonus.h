/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiz-dos <luiz-dos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:16:19 by luiz-dos          #+#    #+#             */
/*   Updated: 2024/06/07 16:14:40 by luiz-dos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif /* BUFFER_SIZE */

char	*get_next_line(int fd);
char	*ft_line(char *line, char *buffer);
int		ft_strlen_gnl(char *s);
void	ft_handle_buffer(char *buffer, int *found_newline);
void	get_next_line_two(char *buffer, int fd);

#endif /* GET_NEXT_LINE_BONUS_H */
