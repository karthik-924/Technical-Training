#include<stdio.h>
int main()
{
int i,num,j,c,str[100];
char s='a',p;
printf("Enter num:");
scanf("%d",&num);
for(i=1;i<=num;i++){
c=0;
for(j=1;j<=i;j++){
p=s+c;
printf(" %c",p);
c+=1;
}
printf("\n");
}
}
