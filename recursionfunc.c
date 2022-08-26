#include <stdio.h>
int main()
{
    int a = 8, b = 9, c;
    c = fun(a, b);
    printf("%d\n", c);
    return 0;
}
int fun(int a, int b)
{
    if (a < b)
        return fun(b, a);
    else if (b != 0)
        return a + fun(a, b - 1);
    else
        return 0;
}