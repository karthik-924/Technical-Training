#include <stdio.h>
struct life
{
    int value;
    struct life *next;
};
typedef struct life stack;
int i = 0;
stack *top1 = NULL, *top2 = NULL;
void push(stack *any, int value, int number)
{
    if (number == 0)
    {
        any = (int *)malloc(sizeof(stack));
        any->next = top1;
        any->value = value;
        top1 = any;
    }
    else if (number == 1)
    {
        any = (int *)malloc(sizeof(stack));
        any->next = top2;
        any->value = value;
        top2 = any;
    }
}
int pop(stack *any, int number)
{
    int val;
    if (number == 0)
    {
        if (top1 == NULL)
            printf("Empty");
        else
        {
            stack *temp = top1;
            top1 = top1->next;
            val = temp->value;
        }
    }
    else if (number == 1)
    {
        if (top2 == NULL)
            printf("Empty");
        else
        {
            stack *temp = top2;
            top2 = top2->next;
            val = temp->value;
        }
    }
    return val;
}
int isEmpty(stack *any, int number)
{
    if (number == 0)
    {
        if (top1 == NULL)
            return 1;
        else
            return 0;
    }
    else if (number == 0)
    {
        if (top1 == NULL)
            return 1;
        else
            return 0;
    }
}
void display(stack *any, int number)
{
    if (number == 0)
    {
        if (top1 == NULL)
            printf("Empty");
        else
        {
            stack *temp = top1;
            while (temp != NULL)
            {
                printf("%d ", temp->value);
                temp = temp->next;
            }
        }
    }
    else if (number == 1)
    {
        if (top2 == NULL)
            printf("Empty");
        else
        {
            stack *temp = top2;
            while (temp != NULL)
            {
                printf("%d ", temp->value);
                temp = temp->next;
            }
        }
    }
}
int main()
{
    stack *A, *B;
    push(&A, 10, 0);
    push(&A, 20, 0);
    display(&A,0);
    printf("\n");
    push(&B, 100, 1);
    push(&B, 20, 1);
    display(&B,1);
    printf("\n");
    printf("%d \n", pop(&A, 0));
    printf("%d \n", pop(&B, 1));
    display(&A,0);
    printf("\n");
    display(&B,1);
    printf("\n");
    push(&A, pop(&B, 1), 0);
    display(&A,0);
    if (isEmpty(&B, 1))
        printf("\nB is empty");

    return 0;
}