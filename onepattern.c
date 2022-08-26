#include<stdio.h>
int main()
{
int i,n,j,c,st[100];
char s='a',p;
printf("Enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++){
c=0;
for(j=1;j<=i;j++){
p=s+c;
st[j]+=1;
printf(" %c",p);
c+=1;
}
printf("\n");
}
for(i=1;i<=n;i++)
printf(" %d",st[i]);
}
