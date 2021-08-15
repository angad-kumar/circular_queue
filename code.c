#include<stdio.h>
#include<limits.h>
#include<stdbool.h>
#include<stdlib.h>


int a[5];
int front = -1;
int rear = -1;


int size = sizeof(a)/sizeof(int);

int main()
{   
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(50);
    dequeue(10);
    dequeue(20);
    enqueue(50);
    // enqueue(50);
    // disp();

    

    

for(int i=front;i<=rear;i++)
{
printf("%d, ",a[i]);
}
    return 0;
}

void enqueue(int x)
{
    if(rear == -1 && front == -1) // checking for queue empty condition and inserting
    {
        rear = 0;
        front =0;
        a[rear] = x;
        printf("Queue was empty\n");
    }
    else if( front == 0 && rear == size-1) //checking for queue is full
    {
        printf("Queue is full\n");
    }
    else    //checking for queue has some element and insetring
    {
        rear = rear+1;
        a[rear] = x;
        printf("Queue contains some elements\n");
    }

}

void dequeue(int x)
{
    if(front == -1 && rear == -1) //checking for empty condition
    {
        printf("It's empty\n");
    }

    if(front == rear) //condition for when only one elements available in queue
    {
        x = a[front];
        front = -1;
        rear = -1;
        printf("only one element of queue of front\n");
    }

    else if(front == size-1 )
    {
        x = a[front];
        front = 0;
        printf("Element at the last position of queue\n");
    }
    else         //checking for queue has some element
    {   
        x = a[front];
        front += 1;
        printf("Queue has elements\n");

    }

}
 
void disp()
{
    int i=front;  
    printf("Hii i am shweta ");

    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty..");  
    }  
    else  
    {  
        printf("\nElements in a Queue are :");  
        while(i<=rear)  
        {  
            printf("%d,", a[i]);  
            i=(i+1);  
        }  
    }  
}


























