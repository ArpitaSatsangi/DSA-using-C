#include <stdio.h>
#include <stdlib.h>

#define max 4
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

void push(int ele)
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

int pop()
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

void display()
{
    int i;
    printf("queue:   ");
    for(i=front;i<=rear;i++)
    {
        printf("%d  ",q[i]);
    }
    printf("\n");
}

int main()
{
    int x,e,n;
    while(1)
    {
        printf("1.INSERT 2.DELETE 3.display 4.exit \n");
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
                push(e);
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
                n=pop();
                printf("%d is popped \n",n);
            }
        }
        else if(x==3)
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
        else if(x==4)
        {
            exit(1);
        }


    }
    return 0;
}
