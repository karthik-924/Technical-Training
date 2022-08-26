#include<stdio.h>
#include<math.h>
int main()
{
    int ERP,ERG;
    double a;
    scanf("%d",&ERP);
    a=(double)ERP/10;
    ERG=ceil(a);
    switch(ERG){
        case 3:
        case 4:
        case 5:printf("ERG=D\n");
        break;
        case 6:printf("ERG=C\n");
        break;
        case 7:
        case 8:printf("ERG=B\n");
        break;
        case 9:
        case 10:printf("ERG=A\n");
        break;
        default:printf("FAIL\n");
    }
}