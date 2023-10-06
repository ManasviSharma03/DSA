// stack with local variales
#include<stdio.h>
#include<stdlib.h>
int push(int[],int); // return with argument
int pop(int[],int); // return with argument
void peek(int[],int); // no return with argument
void display(int[],int); // no return with argument

int main{
    int stack[50], top=-1;
    int ch, ele;
while(1){
    printf("1: Push\n2: Pop\n3: Peek\n4: Display\n5: Exit: ");
    scanf("%d", &ch);

switch(ch)
{
    case 1: top=push(stack, top);
    break;
    case 2: top=pop(stack, top);
    break;
    case 3: peek(stack, top);
    break;
    case 4: display(stack, top);
    break;
    case 5: exit(0);
    break;
    default:
        printf("Wrong Choice\n"); 
    }
} 
    return 0;
}
int push(int stack[], int top)
{
    if(top==49)
    printf("Overflow\n");
    else
    {
        top++;
        printf("Enter new element: ");
        scanf("%d", stack[top]);
    }
    return top;
}
int pop(int stack[], int top)
{
    if(top==-1)
    printf("Underflow\n");
    else
    {
        printf("%d deleted\n",stack[top]);
        top--;
    }
    return top;
}
void peek(int stack[], int top)
{
    if(top==-1)
    printf("Underflow\n");
    else
        printf("%d is at the top of the stack\n",stack[top]);
}
void display(int stack[], int top) 
{
    int i;
    if(top==-1)
    printf("Underflow\n");
    else
    {
        for(i=top; i>=0; i--)
        printf("%d\n", stack[i]);
    }
}       

