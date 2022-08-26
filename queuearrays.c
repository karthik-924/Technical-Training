#include<stdio.h>
struct student{
    char name[100];
    int age;
    float marks;
    char branch[10];
};
typedef struct student queue;
// queue* create(){
//     return ((queue*)malloc(sizeof(queue)));
// }
int main(){
    int n,choice,front=-1,rear=-1,i,temp;
    printf("Enter no of elements:");
    scanf("%d",&n);
    queue arr[n];
    do{
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.isempty\n5.size\n6.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                rear+=1;
                 if(front==-1)
                front=front+1;
                printf("Enter name:");
                scanf("%s",arr[rear].name);
                printf("Enter age:");
                scanf("%d",&arr[rear].age);
                printf("Enter marks:");
                scanf("%f",&arr[rear].marks);
                printf("Enter branch:");
                scanf("%s",arr[rear].branch);
                
                break;
            }
            case 2:{
                if(front==-1)
                printf("Empty\n");
                else{
                printf("Student with details Name=%s,Age=%d,Marks=%f,Branch=%s is deleted\n"
                ,arr[front].name,arr[front].age,arr[front].marks,arr[front].branch);
                front+=1;
                
                }
                break;
            }
            case 3:{
                if(front==-1||front==rear||rear!=0)
                printf("Empty\n");
                else{
                printf("%d",temp);
                for(i=front;i<=rear;i++){
                    printf("Student\nName=%s\nAge=%d\nMarks=%f\nBranch=%s\n"
                ,arr[i].name,arr[i].age,arr[i].marks,arr[i].branch);
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