#include<stdio.h>
#include<string.h>
int main()
{
enum marks{WT=90,DAA=85,CO=73};
int total=0;
float average;
double percentage;
char grade[10],name[20];
enum marks mark;
printf("Enter name:");
scanf("%s",name);
mark=WT;
total+=mark;
mark=DAA;
total+=mark;
mark=CO;
total+=mark;
printf("Name=%s\n",name);
printf("The total is:%d\n",total);
average=(float)total/3;
printf("The average is:%f\n",average);
percentage=((double)total/300)*100;
printf("The percentage is:%lf\n",percentage);
if(percentage>90)
strncpy(grade, "A+", 10);
else if(percentage>80)
strncpy(grade, "A", 10);
else if(percentage>70)
strncpy(grade, "B", 10);
else if(percentage>60)
strncpy(grade, "C", 10);
else if(percentage>40)
strncpy(grade, "D", 10);
else
strncpy(grade, "F", 10);
printf("Grade=%s\n",grade);
average>80?printf("PASS"):printf("FAIL");
}

