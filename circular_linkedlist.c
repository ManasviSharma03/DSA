#include<stdio.h>
#include<stdlib.h>

typedef struct linknode{
    int data;
    struct node *next;
}node;

void enqueue();
void dequeue();
void display();

node *temp, *last;

int main()
{
    int ch;
    while(1)
    {
        printf("\n1: Enqueue\n2: Dequeue\n3: Display\n4: exit: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: enqueue();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            break;
            default:
        printf("\nWrong Choice");
        }
    }
    return 0;
}
void enqueue()
{
    temp = (node*)malloc(sizeof(node));
    printf("Enter new element: ");
    scanf("%d", &temp->data);
    if(last==NULL)
    {
        last=temp;
        last->next=last;
    }
    else
    {
        temp->next=last->next;
        last->next=temp;
        last=temp;
    }
}
void dequeue()
{
    if(last==NULL)
        printf("\nUnderflow\n");
    else if(last->next==last)
    {
        free(last);
        last=NULL;
    }
    else
    {
        temp=last->next;
        last->next=temp->next;
        free(temp);
        temp=NULL;
    }
}
void display()
{
    if(last==NULL)
        printf("\nUnderflow\n");
    else
    {
        temp=last->next;
        do{
            printf("%d", temp->data);
            temp=temp->next;
        }while(temp!=last->next);
    }
}