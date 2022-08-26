#include <stdio.h>
int main()
{
    int n, i, j, k, count1 = 0, count2 = 0, count3 = 0, tempm, tempright;
    scanf("%d", &n);
    if (n % 2 == 0)
        n = n + 1;
    int mid = n / 2;
    tempm = mid;
    tempright = mid;
    for (i = 0; i < n; i++)
    {
        if (i < mid)
        {
            for (j = mid - count1; j > 0; j--)
            {
                printf("  ");
            }
            if (count1 != 0)
            {
                printf("* ");
                for (j = 0; j < count1 - 1; j++)
                {
                    printf("  ");
                }
            }
            if (i < mid)
                count1 += 1;
            for (j = 0; j < n; j++)
            {
                if (j == mid)
                    printf("* ");
            }
            for (j = 0; j < count2; j++)
            {
                if (count2 != 0)
                {
                    for (j = 0; j < count2 - 1; j++)
                    {
                        printf("  ");
                    }
                }
                printf("* ");
            }
            if (i < mid)
                count2 += 1;
            printf("\n");
        }
        if (i == mid)
        {
            for (j = 0; j < n; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        if (i > mid)
        {
            for (j = 0; j <= count3; j++)
            {
                if (j == count3 && i != n - 1)
                    printf("  *");
                else
                    printf("  ");
            }

            for (j = tempm - 2; j >= 0; j--)
            {
                if (j == 0)
                    printf(" * ");
                else
                    printf("  ");
            }
            for (j = 0; j < n; j++)
            {
                if (i == n - 1 && j == mid)
                    printf("* ");
            }
            tempm = tempm - 1;
            for (j = tempright - 2; j >= 0; j--)
            {
                if (j == 0)
                    printf("*");
                else
                    printf("  ");
            }
            // for(j=0;j<n;j++){
            //     if(j==mid){
            //         printf("* ");
            //     }
            // }
            tempright = tempright - 1;
            count3 += 1;
            printf("\n");
        }
        // if(i>mid){
        //     for (j = count3; j >=0; j--)
        //     {
        //         printf("  ");
        //     }
        //     if (count3 != mid-1)
        //     {
        //         printf("* ");
        //         for (j = (mid/2)-count3; j >0; j--)
        //         {
        //             printf("  ");
        //         }
        //     }
        //     for (j = 0; j < n; j++)
        //     {
        //         if (j == mid)
        //             printf("* ");
        //     }
        //     for (j = (mid/2) - count3; j > 0; j--)
        //     {
        //         printf("  ");
        //     }>
        //     if (count3 != mid-1)
        //     {
        //         printf("* ");

        //     }
        //     // if(j==0)
        //         // printf("* ");
        //             // for(k=count3;k<mid;k++){
        //             //     if(j==0)
        //             //     printf("  ");
        //             // }
        //     // for (j = 0; j <n; j++)
        //     // {
        //     //     if (j == mid)
        //     //         printf("* k");
        //     // }
        //     count3 += 1;
        //     printf("\n");
        // }
    }
    for (i = 0; i < mid; i++)
        printf("  ");
    printf("*\n");
    for (i = 0; i < mid + 1; i++)
        printf("  ");
    printf("*\n");
    for (i = 0; i < mid; i++)
        printf("  ");
    printf("*\n");
    for (i = 0; i < mid - 1; i++)
        printf("  ");
    printf("*\n");
    for (i = 0; i < mid; i++)
        printf("  ");
    printf("*\n");
    for (i = 0; i < mid + 1; i++)
        printf("  ");
    printf("*\n");
    for (i = 0; i < mid; i++)
        printf("  ");
    printf("*\n");
    for (i = 0; i < mid - 1; i++)
        printf("  ");
    printf("*\n");
    for (i = 0; i < mid; i++)
        printf("  ");
    printf("*\n");
    for (i = 0; i < mid + 1; i++)
        printf("  ");
    printf("*\n");
    for (i = 0; i < mid; i++)
        printf("  ");
    printf("*\n");
    printf("\n");
}