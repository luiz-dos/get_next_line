#include "get_next_line.h"
#include <fcntl.h>

int main(void)
{
    int     fd;
    char    *result;

    fd = open("t1.txt", O_RDWR);
    while (1)
    {
        result = get_next_line(fd);
        if (result)
            printf("%s", result);
        else if (!result)
            break ;
        free (result);
    }
    return (0);
}
