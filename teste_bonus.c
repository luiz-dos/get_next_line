#include "get_next_line_bonus.h"
#include <fcntl.h>

int main(void)
{
    int     fd;
    int     fd2;
    char    *result;
    char    *result2;

    fd = open("t1.txt", O_RDWR);
    fd2 = open("t2.txt", O_RDWR);

    while (1)
    {
        result = get_next_line(fd);
        printf("%s", result);

        result2 = get_next_line(fd2);
        printf("%s", result2);
        if (!result || !result2)
        {
            printf("\n");
            break ;
        }
        free (result);
        free (result2);
    }
    return (0);
}
