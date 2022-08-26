#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, j=0;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    int b[num];
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    for(i = num-1; i >= 0; i++){
        b[j]=*(arr+i);
        j+=1;
    }

    for(i = 0; i < num; i++){
        *(arr+i)=&b[i];
    }
    /* Write the logic to reverse the array. */
    

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}