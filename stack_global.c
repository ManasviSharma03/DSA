// stack with global variables
#include<stdio.h>
#include<stdlib.h>
int stack[50];
int top=-1;
void push();
void pop();
void peek();
void display();

int main(){
    int ch;
    while(1){
        printf("1: push\n2: pop\n3: peek\n4: display\n5: exit: ");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1:
            push();
        break;
        case 2:
            pop();
        break;
        case 3:
            peek();
        break;
        case 4:
            display();
        break;
        case 5:
            exit(0);
        break;
        default:
            printf("\nWrong choice\n");
        }
    }
    return 0;
}

// Define all the functions here

void push()
{
    if(top==49)
    {
        printf("\nOverflow\n");
    }
    else
    {
        top++;
        printf("Enter new element");
        scanf("%d", &stack[top]);
    }
}
void pop()
{
   if(top==-1)
   {
    printf("\nUnderflow\n");
   } 
   else
   {
    printf("%d is deleted\n", stack[top]);
    top--;
   }
}
void peek()
{
   if(top==-1)
   {
    printf("\nUnderflow\n");
   } 
   else
   {
    printf("%d is on the top of stack\n", stack[top]);
   }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        for(i=top; i>=0; i--)
        printf("%d\n", stack[i]);
    }
}