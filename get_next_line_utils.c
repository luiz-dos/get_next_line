#include "get_next_line.h"

int ft_strlen_gnl(char *s)
{
    int len;

    if (!s)
        return (0);
    len = 0;
    while (s[len] && s[len] != '\n')
        len++;
    if (s[len] == '\n')
        len++;
    return (len);
}

char    *ft_line(char *line, char *buffer)
{
    char    *new_line;
    int     i;
    int     j;

    new_line = (char *)malloc(ft_strlen_gnl(line) + ft_strlen_gnl(buffer) + 1);
    if (!new_line)
        return (NULL);
    i = 0;
    while (line && line[i])
    {
        new_line[i] = line[i];
        i++;
    }
    j = -1;
    while (buffer && buffer[++j])
    {
        new_line[i++] = buffer[j];
        if (buffer[j] == '\n')
            break ;
    }
    new_line[i] = '\0';
    free(line);
    return (new_line);
}

void    ft_handle_buffer(char *buffer, int *found_newline)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (buffer[i])
    {
        if (*found_newline == 1)
            buffer[j++] = buffer[i];
        if (buffer[i] == '\n')
            *found_newline = 1;
        buffer[i] = 0;
        i++;
    }
}
