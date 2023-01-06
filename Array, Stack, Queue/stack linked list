#include <stdio.h>
#include <stdlib.h>

typedef struct as
{
	int data;
	struct as* next;
}node;

node *top=NULL;

void push(int x)
{
    node * a;
    a=(node *)malloc(sizeof(node));

    a->data=x;
    a->next = top;
    top=a;

    printf("%d is inserted \n",x);
}

node * pop()
{
    node *tmp;
    int value=0;
    if(top==NULL)
    {
        printf("empty\n");
        return tmp;
    }
    else
    {
        tmp=top;
        value=tmp->data;
        top=tmp->next;
    }
    return tmp;
}

void display()
{
    node *tmp;

    if(top==NULL)
    {
        printf("empty\n");
    }
    else
    {
        tmp=top;
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

           printf("\n\n1. push 2. pop 3. display 4. exit \n");
           printf("enter choice: ");
           scanf("%d",&ch);

           if(ch==1)
           {
               printf("enter element: ");
               scanf("%d",&ele);
               push(ele);
           }
           else if(ch==2)
           {
               n=pop();
               printf("popped element is %d",n->data);
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
