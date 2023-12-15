//linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct linknode{
    int data;
    struct linknode *next;
}node;

node *start, *last, *temp;

void create_node()
{
    temp = (node*)malloc(sizeof(node));
    printf("Enter new element: ");
    scanf("%d", &temp->data);
    temp->next=NULL;
}
void display()
{   if(start==NULL)
        printf("No data available");
    else
    {
        temp==start;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }  
}
int main()
{
    int no, i;
    printf("Enter number of nodes: ");
    scanf("%d", &no);
    for(i=0; i<no; i++)
    {
        create_node();
        if(start==NULL)
        {
            start=temp;
            last=temp;
        }
        else
        {
           last->next=temp;
           last=temp; 
        }
    }

    
    return 0;
}