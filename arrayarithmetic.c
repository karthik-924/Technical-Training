#include<stdio.h>
int main()
{
    int a[]={20,30,40},b[]={2,3,4},n=3,i=0,j=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Add%d=%d\n",i,(a[i]+b[i]));
            printf("Sub%d=%d\n",i,(a[i]-b[i]));
            printf("Div%d=%d\n",i,(a[i]/b[i]));
            printf("Mul%d=%d\n",i,(a[i]*b[i]));
            printf("Mod%d=%d\n",i,(a[i]%b[i]));
        }
    }
}