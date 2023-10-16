#include <stdio.h>

int queue[5];
int front=-1, rear=-1;

void fenqueue();
void fdequeue();
void renqueue();
void rdequeue();
void display();

int main()
{
    int choice;

    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Front Enqueue\n2.Front Dequeue\n3.Rear Enqueue\n4.Rear Dequeue\n5.Display\n6.Exit");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
        case 1:
            fenqueue();
            break;
        case 2:
            fdequeue();
            break;
        case 3:
            renqueue();
            break;
        case 4:
            rdequeue();
            break;
        case 5:
            display();
            break;
        case 6:
            return 0;
        default:
            printf("\nInvalid choice!!");
        }
    }
    
}

void fenqueue()
{
    if((front==0&&rear==4)||(rear+1==front))
    {
        printf("OVERFLOW!");
    }
    else
    {
        if(front==-1)
        {
            front++;
            rear++;
        }
        else if(front!=0)
        {
            front--;
        }
        else if(front==0)
        {
            front=4;
        }
        scanf("%d", &queue[front]);
    }
}

void renqueue()
{
    if((front==0&&rear==4)||(rear+1==front))
    {
        printf("OVERFLOW!");
    }
    else
    {
        if(rear==-1)
        {
            front++;
            rear++;
        }
        else if(rear==4)
        {
            rear=0;
        }
        else
        {
            rear++;
        }
        scanf("%d", &queue[rear]);
    }
}

void fdequeue()
{
    if(front==-1)
    {
        printf("UNDERFLOW!");
    }
    else
    {
        printf("%d is deleted!", queue[front]);
        front=(front+1)%5;
    }
}

void rdequeue()
{
    if(rear==-1)
    {
        printf("UNDERFLOW!");
    }
    else
    {
        if(rear==0)
        {
            rear=4;
        }
        else
        {
            rear=(rear+1)%5;
        }
    }
}

void display()
{
    if(rear==-1)
    {
        printf("UNDERFLOW!");
    }
    else
    {
        for(int i=front;i!=0;i=(i+1)%5)
        {
            printf("%d", queue[i]);
        }
        printf("%d", queue[rear]);
    }
}
