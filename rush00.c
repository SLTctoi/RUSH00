#include <unistd.h>

void    ft_putchar(int x, int y, int a, int b)
{
        if ((a == x && b == 1) || (a == 1 && b == 1))
        {
                write(1, "A", 1);
        }
        else if ((a == 1 && b == y) || (a == x && b == y))
        {
                write(1, "C", 1);
        }
        else if (a != 1 && a != x && b != 1 && b != y)
        {
                write(1, " ", 1);
        }
        else
        {
                write(1, "B", 1);
        }
}

void    rush03(int x, int y)
{
        int     a;
        int     b;

        a = 1;
        if (x > 0 || y > 0)
        {
                while (a <= x)
                {
                        b = 1;
                        while (b <= y)
                        {
                                ft_putchar(x, y, a, b);
                                b++;
                        }
                        write(1, "\n", 1);
                        a++;
                }
        }
}

int     main(void)
{
        rush03(4, 100);
        return (0);
}
