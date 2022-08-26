#include<stdio.h>
#include<string.h>
struct Men{
    int pant;
    int shirt;
    int hat;
};
struct Women{
    int saree;
    int jeans;
    int leggins;
};
struct Kids{
    int shirt;
    int pant;
    int toys;
};
int main(){
    int shoppingbill,mshirts=0,mpant=0,mhat=0,wsaree=0,wjeans=0,wleggins=0,kshirt=0,kpant=0,ktoys=0;
    float discount;
    char category[100]="";
    printf("KLM\n");
    struct Men m;
    m.shirt=500;
    m.pant=1000;
    m.hat=100;
    struct Women w;
    w.jeans=1000;
    w.leggins=500;
    w.saree=1000;
    struct Kids k;
    k.shirt=400;
    k.pant=800;
    k.toys=500;
    while(strcmp(category,"end")!=0){
        printf("Enter category:");
    scanf("%s",category);
    if (strcmp(category,"men")==0){
        printf("Enter no of shirts bought:");
        scanf("%d",&mshirts);
        shoppingbill+=(mshirts*m.shirt);
        printf("Enter no of pants bought:");
        scanf("%d",&mpant);
        shoppingbill+=(mpant*m.pant);
        printf("Enter no of hats bought:");
        scanf("%d",&mhat);
        shoppingbill+=(mhat*m.hat);
    }
    else if (strcmp(category,"women")==0){
        printf("Enter no of jeans bought:");
        scanf("%d",&wjeans);
        shoppingbill+=(wjeans*w.jeans);
        printf("Enter no of leggins bought:");
        scanf("%d",&wleggins);
        shoppingbill+=(wleggins*w.leggins);
        printf("Enter no of sarees bought:");
        scanf("%d",&wsaree);
        shoppingbill+=(wsaree*w.saree);
    }
    else if(strcmp(category,"kids")==0){
        printf("Enter no of shirts bought:");
        scanf("%d",&kshirt);
        shoppingbill+=(kshirt*k.shirt);
        printf("Enter no of pants bought:");
        scanf("%d",&kpant);
        shoppingbill+=(kpant*k.pant);
        printf("Enter no of toys bought:");
        scanf("%d",&ktoys);
        shoppingbill+=(ktoys*k.toys);
    }
    }
    if(shoppingbill<10000)
    discount=0;
    else if(shoppingbill<20000)
    discount=(float)(shoppingbill*10)/100;
    else if(shoppingbill<30000)
    discount=shoppingbill*0.2;
    else if(shoppingbill<40000)
    discount=shoppingbill*0.3;
    else if(shoppingbill<50000)
    discount=shoppingbill*0.4;
    else if(shoppingbill>=50000)
    discount=shoppingbill*0.5;
    printf("\nTotal bill=%d\n",shoppingbill);
    printf("\nDiscount=%.2f\n",discount);
    printf("\nTotal bill after discount=%.2f\n",shoppingbill-discount);
    return 0;
}