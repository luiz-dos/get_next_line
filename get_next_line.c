#include "get_next_line.h"

char    *get_next_line(int fd)
{
    static char buffer[BUFFER_SIZE + 1];
    char        *line;
    int         found_newline;

    if (read(fd, 0, 0) < 0 || fd >= FOPEN_MAX || fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    line = NULL;
    found_newline = 0;
    while(!found_newline && (buffer[0] || read(fd, buffer, BUFFER_SIZE) > 0))
    {
        line = ft_line(line, buffer);
        ft_handle_buffer(buffer, &found_newline);
    }
    return (line);
}
