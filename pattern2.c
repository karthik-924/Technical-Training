int main()
{
    int i,j,n,k,c=1;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    for(k=0;k<n-c;k++)
    printf(" ");
    c+=1;
    for(j=0;j<=i;j++){
        printf("* ");
    }
    printf("\n");
    }
}