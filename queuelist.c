#include<stdio.h>
struct student{
    char name[100];
    int age;
    float marks;
    char branch[10];
    struct student* next;
};
typedef struct student queue;
queue* create(){
    return ((queue*)malloc(sizeof(queue)));
}
int main(){
    int n,choice,i,temp;
    queue* arr;
    queue* front=NULL;
    queue* rear=NULL;
    do{
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.isempty\n5.size\n6.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                arr=create();
                if(front==NULL){
                front=rear=arr;
                front->next=NULL;
                rear->next=NULL;
                printf("Enter name:");
                scanf("%s",arr->name);
                printf("Enter age:");
                scanf("%d",&arr->age);
                printf("Enter marks:");
                scanf("%f",&arr->marks);
                printf("Enter branch:");
                scanf("%s",arr->branch);
                }
                else{
                printf("Enter name:");
                scanf("%s",arr->name);
                printf("Enter age:");
                scanf("%d",&arr->age);
                printf("Enter marks:");
                scanf("%f",&arr->marks);
                printf("Enter branch:");
                scanf("%s",arr->branch);
                rear->next=arr;
                rear=arr;
                rear->next=NULL;
                }
                break;
            }
            case 2:{
                if(front==NULL)
                printf("Empty\n");
                else{
                printf("Student with details Name=%s,Age=%d,Marks=%f,Branch=%s is deleted\n"
                ,front->name,front->age,front->marks,front->branch);
                front=front->next;
                }
                break;
            }
            case 3:{
                if(rear==NULL)
                printf("Empty\n");
                else{
                    queue* temp=front;
                while(temp!=NULL){
                    printf("Student\nName=%s\nAge=%d\nMarks=%f\nBranch=%s\n"
                ,temp->name,temp->age,temp->marks,temp->branch);
                temp=temp->next;
                }
                }
                break;
            }
            case 4:{
                if(front==rear)
                printf("Empty");
                break;
            }
            case 5:{
                printf("size of array=%d",front-rear);
                break;
            }
            case 6:printf("Exit");
            break;
            default: printf("Invalid");
        }
    }while(choice!=6);
}