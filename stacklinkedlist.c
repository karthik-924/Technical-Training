#include<stdio.h>
struct student{
    char name[100];
    int age;
    float marks;
    char branch[10];
    struct student *next;
    
}*s;
int main(){
    int i,j,n,choice;
    struct student *top=NULL;
    printf("1.Push\n2.Pop\n3.isEmpty\n4.isFull\n5.Display\n6.Exit\n");
    do{
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                s=(int *)malloc(sizeof(struct student));
                printf("Enter name:");
                scanf("%s",s->name);
                printf("Enter age:");
                scanf("%d",&s->age);
                printf("Enter marks:");
                scanf("%f",&s->marks);
                printf("Enter branch:");
                scanf("%s",s->branch);
                if(top==NULL){
                    s->next=NULL;
                }
                else{
                    s->next=top;
                }
                top=s;
                break;
            }
            case 2:{
                if(top==NULL){
                    printf("No elements");
                }
                else{
                
                printf("Student with details Name=%s,Age=%d,Marks=%f,Branch=%s is deleted\n",top->name,top->age,top->marks,top->branch);
                top=top->next;
                }
                
                break;
            }
            case 3:{
                if(top==NULL)
                printf("True\n");
                else
                printf("False\n");
                break;
            }
            case 4:{
                if(top!=NULL)
                printf("True\n");
                else
                printf("False\n");
                break;
            }
            case 5:{
                struct student *temp=top;
                if(temp==NULL)
                printf("Enter no elements");
                else{
                while(temp!=NULL){
                    printf("Student \nName=%s\nAge=%d\nMarks=%f\nBranch=%s\n\n",temp->name,temp->age,temp->marks,temp->branch);
                    temp=temp->next;
                }
                }
                break;
            }
            case 6:{printf("Exit\n");
            break;
            }
            default:printf("Invalid choice\n");
            break;

        }
    }while(choice!=6);
}