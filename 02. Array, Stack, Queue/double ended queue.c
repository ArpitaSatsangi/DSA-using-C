#include <stdio.h>
#include <stdlib.h>
//double ended circular queue
#define max 5
int q[max];
int front=-1;
int rear=-1;

int isfull()
{
    if(rear==max-1)
        return 1;
    else
        return 0;
}

int isempty()
{
    if(front==-1)
        return 1;
    else
        return 0;
}

void inrear(int ele)
{
    if(isempty())
    {
        front=rear=0;
    }
    else
    {
        rear++;
    }
    q[rear]=ele;
    printf("%d is pushed\n", ele);


}

int defront()
{
    int ele;
    ele=q[front];
    if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front++;
    }
    return ele;
}

void infront(int ele)
{
    if(isempty())
    {
        front=rear=0;
    }
    else
    {
        front=max-1;
    }
    q[front]=ele;
    printf("%d is pushed\n", ele);


}

int derear()
{
    int ele;
    ele=q[rear];
    if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        rear--;
    }
    return ele;
}

void display()
{
    int i;
    printf("queue:   ");
    for(i=front;i!=rear;i=(i+1)%max)
    {
        printf("%d  ",q[i]);
    }
    printf("%d  ",q[rear]);
    printf("\n");
}

int main()
{
    int x,e,n;
    while(1)
    {
        printf("1.INSERT rear 2.DELETE front 3.INSERT front 4.DELETE rear 5.display 6.exit \n");
        printf("choice: ");
        scanf("%d",&x);
        if(x==1)
        {
            if(isfull())
            {
                printf("full\n");
            }
            else
            {
                printf("element: ");
                scanf("%d",&e);
                inrear(e);
            }
        }
        else if(x==2)
        {
            if(isempty())
            {
                printf("empty\n");
            }
            else
            {
                n=defront();
                printf("%d is popped \n",n);
            }
        }
        if(x==3)
        {
            if(isfull())
            {
                printf("full\n");
            }
            else
            {
                printf("element: ");
                scanf("%d",&e);
                infront(e);
            }
        }
        else if(x==4)
        {
            if(isempty())
            {
                printf("empty\n");
            }
            else
            {
                n=derear();
                printf("%d is popped \n",n);
            }
        }
        else if(x==5)
        {
            if(isempty())
            {
                printf("empty\n");
            }
            else
            {
                display();
            }
        }
        else if(x==6)
        {
            exit(1);
        }


    }
    return 0;
}
