#include <stdio.h>
int main()
{
    int n, i, j, temp;
    scanf("%d", &n);
    int a[n], key;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
    {
        key = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[key])
            {

                key = j;
            }
        }
        // printf("%d\n",key);
        temp = a[i];
        a[i] = a[key];
        a[key] = temp;
    }
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}