#include<stdio.h>
int main()
{
int i,n,j;
char s='*';
printf("Enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++){
for(j=1;j<=i;j++){
printf("%c",s);
}
printf("\n");
}
}
