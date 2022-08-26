#include<stdio.h>
int main(){
    int n,i,j,s=0;
    scanf("%d",&n);
    int a[n],chemicals[2],max;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (a[i]*a[j]>max){
                max=a[i]*a[j];
                chemicals[0]=a[i];
                chemicals[1]=a[j];
            }
        }
    }
    for(i=0;i<2;i++){
    s+=chemicals[i];
    }
    printf("%d\n",s);
}