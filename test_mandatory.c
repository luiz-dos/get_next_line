#include "get_next_line.h"

int main(void)
{
    int     fd;
    char    *result;

    fd = open("empty_text.txt", O_RDWR);
    while (1)
    {
        result = get_next_line(fd);
        if (result)
            printf("%s", result);
            
        if (!result)
        {
            printf("NULL\n");
            break ;
        }
        free (result);
    }
    close (fd);
    return (0);
}
