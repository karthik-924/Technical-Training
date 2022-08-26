#include<stdio.h>
int main(){
    int a[20],n,i,temp,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n/2;i++){
        for(j=i+1;j<n/2;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("%d ",a[i]);
    }
    for(i=n/2;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("%d ",a[i]);
    }
}