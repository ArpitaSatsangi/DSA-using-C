#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int data;
    struct queue *next;

}node;

node *front=NULL;
node *rear=NULL;

void enqueue(int ele)
{
    node *ptr=(node *)malloc(sizeof(node));
    ptr->data=ele;
    ptr->next=NULL;

    if(front==NULL && rear==NULL)
    {
        front=rear=ptr;
    }
    else
    {
        rear->next=ptr;
        rear=ptr;
    }

    printf("%d is inserted",ele);

}

node * dequeue()
{
    int tmp_data=0;
    node *tmp;
    if(front==NULL && rear==NULL)
    {
        printf("empty\n");
        return tmp;
    }
    else if(front==rear)
    {
        tmp=front;
        front=rear=NULL;
        return tmp;
    }
    else
    {
       tmp=front;
       tmp_data=front->data;
       front=tmp->next;
    }
    return tmp;
}

void display()
{
    node *tmp;

    if(front==NULL && rear==NULL)
    {
        printf("empty\n");
    }
    else
    {
        tmp=front;
        while(tmp!=NULL)
        {
            printf("\ndata: %d \n",tmp->data);
            tmp=tmp->next;
        }
    }
}

int main()
{
    int ele,ch;
    node *n;
    while(1)
    {

           printf("\n\n1. insert 2. delete 3. display 4. exit \n");
           printf("enter choice: ");
           scanf("%d",&ch);

           if(ch==1)
           {
               printf("enter element: ");
               scanf("%d",&ele);
               enqueue(ele);
           }
           else if(ch==2)
           {
               n=dequeue();
               printf("deleted element is %d",n->data);
               free(n);
           }
           else if(ch==3)
           {
               display();
           }
           else if(ch==4)
           {
               exit(1);
           }

    }
    return 0;
}
