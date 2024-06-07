#include "get_next_line_bonus.h"

int main(void)
{
    int     fd1;
    int     fd2;
    char    *result;
    char    *result2;

    fd1 = open("t1.txt", O_RDWR);
    fd2 = open("t2.txt", O_RDWR);
    while (1)
    {
        result = get_next_line(fd1);
        if (result)
            printf("%s", result);

        result2 = get_next_line(fd2);
        if (result2)
            printf("%s", result2);

        if (!result && !result2)
        {
            printf("NULL\n");
            break ;
        }
        free (result);
        free (result2);
    }
    close (fd1);
    close (fd2);
    return (0);
}