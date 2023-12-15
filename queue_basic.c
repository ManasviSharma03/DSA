//queue operations
#include<stdio.h>
#include<stdlib.h>
#define MAX 50
//global variables
int queue [MAX];
int r=-1, f=-1;
//function declaration
void enqueue(); //Insertion in queue;
void dequeue(); //Deletion in queue;
void display(); //Traverse;
//driver function
int main(){
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
        if(r==MAX-1)
        printf("\nOverflow");
        else
        {
            if(f==-1)
            {
                f++; r++;
            }
            else
                r++;
                printf("\nEnter new element: ");
                scanf("%d", &queue[r]);
        }
    }
    void dequeue()
    {
        if(f==-1)
        printf("\nUnderflow");
        else
            f++;
        if(f>r)
        {
            f=-1; r=-1;
        }    
    }
    void display()
    {
        if(f==-1)
        printf("\nUnderflow");
        else
        {
            for(int i=f; i<=r; i++)
            printf("%d ", queue[i]);
        }
        printf("\n");
    }

