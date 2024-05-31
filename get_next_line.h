#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif /* BUFFER_SIZE */

char    *get_next_line(int fd);
char    *ft_line(char *line, char *buffer);
int     ft_strlen_gnl(char *s);
void    ft_handle_buffer(char *buffer, int *found_newline);

#endif /* GET_NEXT_LINE_H */