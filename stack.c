#include<stdio.h>
struct student{
    char name[100];
    int age;
    float marks;
    char branch[10];
};
int main(){
    int n,top=0,i,choice;
    scanf("%d",&n);
    struct student s[n];
    printf("1.Push\n2.Pop\n3.isEmpty\n4.isFull\n5.Display\n6.Exit\n");
    do{
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                printf("Enter name:");
                scanf("%s",s[top].name);
                printf("Enter age:");
                scanf("%d",&s[top].age);
                printf("Enter marks:");
                scanf("%f",&s[top].marks);
                printf("Enter branch:");
                scanf("%s",s[top].branch);
                top+=1;
                break;
            }
            case 2:{
                top-=1;
                printf("Student with details Name=%s,Age=%d,Marks=%f,Branch=%s is deleted\n"
                ,s[top].name,s[top].age,s[top].marks,s[top].branch);
                
                break;
            }
            case 3:{
                if(top>0)
                printf("False\n");
                else
                printf("True\n");
                break;
            }
            case 4:{
                if(top>0)
                printf("True\n");
                else
                printf("False\n");
                break;
            }
            case 5:{
                for(i=0;i<top;i++){
                    printf("Student %d\nName=%s\nAge=%d\nMarks=%f\nBranch=%s\n"
                    ,i+1,s[i].name,s[i].age,s[i].marks,s[i].branch);
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