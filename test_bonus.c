#include "get_next_line_bonus.h"
#include <fcntl.h>

int main(void)
{
    int     fd;
    int     fd2;
    int     fd3;
    char    *result;
    char    *result2;
    char    *result3;

    fd = open("t1.txt", O_RDWR);
    fd2 = open("t2.txt", O_RDWR);
    fd3 = open("t3.txt", O_RDWR);

    while (1)
    {
        result = get_next_line(fd);
        if (result)
            printf("%s", result);
        result2 = get_next_line(fd2);
        if (result2)
            printf("%s", result2);
        result3 = get_next_line(fd3);
        if (result3)
            printf("%s", result3);
        if (!result && !result2 && !result3)
            break ;
        free (result);
        free (result2);
        free (result3);
    }
    return (0);
}
