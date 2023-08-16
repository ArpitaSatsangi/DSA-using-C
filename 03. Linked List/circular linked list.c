#include <stdio.h>
#include <stdlib.h>

typedef struct circular
{
    int data;
    struct circular *next;
}node;

node * last=NULL;

int count()
{
    node *tmp=last->next;
    int c=0;
    if(tmp==NULL)
    {
        return c;
    }
    while(tmp != last)
    {
        tmp = tmp->next;
        c++;
    }
    c++;

    return c;
}

void inLast(int ele)
{
    node *ptr;
    ptr=(node *)malloc(sizeof(node));
    if(last==NULL)
    {
       ptr->data=ele;
       ptr->next=ptr;
       last=ptr;
    }
    else
    {
       ptr->data = ele;
       ptr->next=last-> next;
       last->next=ptr;
       last=ptr;
    }
}

void inStart(int ele)
{
    node *ptr;
    ptr=(node *)malloc(sizeof(node));
    if(last==NULL)
    {
       ptr->data=ele;
       ptr->next=ptr;
       last=ptr;
    }
    else
    {
        ptr->data=ele;
        ptr->next=last->next;
        last->next=ptr;
    }

}

void inPos(int ele)
{
    node *ptr, *pre;
    int pos, i, n;

    printf("enter position: ");
    scanf("%d",&pos);

    n=count();

    if(pos >= 1 && pos<=n+1)
    {
       if(pos == 1)
       {
           inStart(ele);
       }
       else if(pos==n+1)
       {
           inLast(ele);
       }

       else
       {
           ptr=(node *)malloc(sizeof(node));
           ptr->data=ele;
           pre=last->next;//first node
           for(i=1;i<=pos-2;i++)
           {
               pre=pre->next;
           }
           ptr->next=pre->next;
           pre->next=ptr;
       }
    }
}

void deLast()
{
    node * tmp;
    node * ptr;
    tmp=last->next; //head or first element

    if(tmp->next==tmp)
    {
        tmp=NULL;
        free(tmp);
        printf("it had one node only which is now deleted\n");
    }
    else
    {
        while(tmp->next != last->next)
        {
            ptr=tmp;
            tmp=tmp->next;
        }
        ptr->next=tmp->next;
        last=ptr;
        free(tmp);
        printf("last element is successfully deleted\n");
    }

}

void deStart()
{
    node *pre;
    pre=last->next;//first node
    last->next=pre->next;
    free(pre);
    printf("first element is successfully deleted\n");
}

void dePos()
{
    node *ptr, *pre;
    int pos, i, n;

    printf("enter position: ");
    scanf("%d",&pos);

    n=count();

    if(pos >= 1 && pos<=n+1)
    {
       if(pos == 1)
       {
           deStart();
       }
       else if(pos==n+1)
       {
           deLast();
       }

       else
       {
           pre=last->next;//first element
           for(i=1;i<pos-1;i++)
           {
               pre=pre->next;
           }
           ptr=pre->next;//element you want to delete

           pre->next=ptr->next;
           free(ptr);
       }
    }
}

void display()
{
    node *tmp;
    node *ptr;

    if(last==NULL)
    {
        printf("empty\n");
    }
    else
    {
        tmp=last;
        ptr=last->next;
        while(ptr!=tmp)
        {
            printf("\ndata: %d \n",ptr->data);
            ptr=ptr->next;
        }
        printf("\ndata: %d \n",ptr->data);
    }
}

int main(void)
{
    int ele,ch;
    while(1)
    {

           printf("\n\n1. insert at last \n2. insert at start \n3. insert at position\n");
           printf("4. delete at last\n5. delete at start\n6. delete at position\n");
           printf("7. display\n8. exit\n");

           printf("\nenter choice: ");
           scanf("%d",&ch);

           if(ch==1)
           {
               printf("enter element: ");
               scanf("%d",&ele);
               inLast(ele);
           }
           else if(ch==2)
           {
               printf("enter element: ");
               scanf("%d",&ele);
               inStart(ele);
           }
           else if(ch==3)
           {
               printf("enter element: ");
               scanf("%d",&ele);
               inPos(ele);
           }
           else if(ch==4)
           {
               if(last==NULL)
               {
                   printf("empty\n");
               }
               else
               {
                   deLast();
               }
           }
           else if(ch==5)
           {
               if(last==NULL)
               {
                   printf("empty\n");
               }
               else
               {
                   deStart();
               }
           }

           else if(ch==6)
           {
               if(last==NULL)
               {
                   printf("empty\n");
               }
               else
               {
                   dePos();
               }
           }
           else if(ch==7)
           {
               if(last==NULL)
               {
                   printf("empty");
               }
               else
               {
                   display();
               }
           }
           else if(ch==8)
           {
               exit(1);
           }
    }
}
