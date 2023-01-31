#include<stdio.h>
#define SIZE 4

int cqueue[SIZE];
int front=-1,rear=-1;

void enqueue(int ele)
{
    if(front==-1)
        front=0;

    rear = (rear+1)%SIZE;
    cqueue[rear] = ele;
}

int dequeue()
{
    int ele = cqueue[front];

    if(front==rear)
        front = rear = -1;
    else
        front = (front+1)%SIZE;

    return ele;
}

int isFull()
{
    if((rear+1)%SIZE==front)
        return 1;
    else
        return 0;
}

int isUnderflow()
{
    if(front==-1)
        return 1;
    else
        return 0;
}

void display()
{
    int i;

    printf("\nQueue Element: ");

    for(i=front;i!=rear;i=(i + 1)%SIZE)
    {
        printf("%d ",cqueue[i]);
    }

    printf("%d\n", cqueue[i]);
}

int main()
{
    int ch,ele;

    while(1)
    {
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d",&ch);

        if(ch==1)
        {
            if(isFull())
            {
                printf("Queue is Full\n");
            }
            else
            {
                printf("Enter element : ");
                scanf("%d",&ele);
                enqueue(ele);
                printf("Element %d successfully inserted\n",ele);
            }
        }
        else if(ch==2)
        {
            if(isUnderflow())
            {
                printf("Queue is Empty\n");
            }
            else
            {
                ele = dequeue();
                printf("Element %d successfully deleted\n",ele);
            }
        }
        else if(ch==3)
        {
            if(isUnderflow())
            {
                printf("Queue is Empty\n");
            }
            else
            {
                display();
            }
        }
        else if(ch==4)
        {
            break;
        }
        else
        {
            printf("Wrong Choice, Try again!\n");
        }
    }

    return 0;
}
