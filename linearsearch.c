#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int rollno,marks;
    int year;
};
typedef struct student stud;
int main(){
    int n,i,choice,rollno;
    printf("Enter no of students:");
    scanf("%d",&n);
    char name[100];
    stud students[n];
    for(i=0;i<n;i++){
        printf("Enter student name:");
        scanf("%s",students[i].name);
        printf("Enter student roll no:");
        scanf("%d",&students[i].rollno);
        printf("Enter student marks:");
        scanf("%d",&students[i].marks);
        printf("Enter student year:");
        scanf("%d",&students[i].year);
        printf("\n");
    }
    printf("1.Search by name\n2.Search by rollno\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:{
            printf("Enter name:");
            scanf("%s",name);
            for(i=0;i<n;i++){
                if(strcmp(students[i].name,name)==0){
                    printf("Student name:%s\n",students[i].name);
                    printf("Student rollno:%d\n",students[i].rollno);
                    printf("Student year:%d\n",students[i].year);
                    printf("Student marks:%d\n",students[i].marks);
                    return 0;
                }
            }
            printf("Not found\n");
            break;
        }
        case 2:{
            printf("Enter rollno:");
            scanf("%d",& rollno);
            for(i=0;i<n;i++){
                if(students[i].rollno==rollno){
                    printf("Student name:%s\n",students[i].name);
                    printf("Student rollno:%d\n",students[i].rollno);
                    printf("Student year:%d\n",students[i].year);
                    printf("Student marks:%d\n",students[i].marks);
                    return 0;
                }
            }
            printf("Not found\n");
            break;
        }
        default: printf("Wrong chocie\n");
        break;
    }
    return 0;

}