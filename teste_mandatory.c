#include "get_next_line.h"
#include <fcntl.h>

int main(void)
{
    int     fd;
    char    *result;

    fd = open("teste.txt", O_RDWR);
    while (1)
    {
        result = get_next_line(fd);
        printf("%s", result);
        if (!result)
        {
            printf("\n");
            break ;
        }
        free (result);
    }
    return (0);
}
