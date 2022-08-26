#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
int main(){
    char a[]="Karthik",b[10],d[10];
    int c,i;
    printf("Length of a=%ld\n",strlen(a));
    //printf("UpperCase word is=%s",strupr(a));
    printf("Copied string b=%s\n",strcpy(b,a));
    for( i = 0 ; i < 2 ; i++ ) {
      printf("%d\n", rand() % 50);
   }
    printf("Power of 5,2=%lf\n",pow(5,2));
    printf("Square root of 64=%lf\n",sqrt(64));
    for(i=0;i<strlen(a);i++){
    b[i]=toupper(a[i]);
    d[i]=tolower(a[i]);
    }
    printf("Upper case=%s\n",b);
    printf("Lower case=%s\n",d);
    printf("IsAlpha=%d\n",isalpha(a));
    while(1){
        printf("Enter c:");
        scanf("%d",&c);
        if(c==2)
        exit(0);
    }
    return 0;
}