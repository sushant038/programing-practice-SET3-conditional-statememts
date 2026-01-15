#include <stdio.h>
int main()
{
    int a = 4, b = 2, c = 6, d = 32;
    if (a > b && a > c && a > d)
    {
        printf("the greatest of all is %d\n", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("the greatest of all is %d\n", b);
    }

    if (c > a && c > b && c > d)
    {
        printf("the greatest of all is %d\n", c);
    }
    if (d > a && d > c && d > b)
    {
        printf("the greatest of all is %d\n", d);
    }
    return 0;
}