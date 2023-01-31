#include <stdio.h>
#include <stdlib.h>

typedef struct circular_doubly_linked_list
{
    int data;
    struct circular_doubly_linked_list *next;
    struct circular_doubly_linked_list *prev;
}node;

node * last=NULL;

int count()
{
    node *tmp=last->next;//first node
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

void swap(node *a, node *b)
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

void inStart(int ele)
{
    node *ptr,*tmp;
    ptr=(node *)malloc(sizeof(node));
    ptr->data=ele;

    if(last==NULL)
    {
       ptr->next=ptr;
       ptr->prev=ptr;
       last=ptr;
    }
    else
    {
        ptr->next=last->next;
        ptr->prev=last;
        ptr->next->prev=ptr;
        last->next=ptr;
    }
}

void inLast(int ele)
{
    node *ptr;
    ptr=(node *)malloc(sizeof(node));
    ptr->data=ele;

    if(last==NULL)
    {
        inStart(ele);
    }
    else
    {
       ptr->next=last-> next;
       last->next=ptr;
       ptr->prev=last;
       ptr->next->prev=ptr;
       last=ptr;
    }
}

void inPos(int ele)
{
    node *ptr, *tmp=last->next;//first node
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

           for(i=1;i<pos-1;i++)
           {
               tmp=tmp->next;
           }
           ptr->next = tmp->next;
           ptr->prev=tmp;

           tmp->next = ptr;
           ptr->next->prev=ptr;
       }

    }
}

void deStart()
{
    node *ptr=last->next;//first node
    ptr->next->prev=ptr->prev;
    last->next=ptr->next;

    free(ptr);
    printf("successfully deleted in beginning\n");
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
        tmp->next->prev=ptr;
        last=ptr;
        free(tmp);
        printf("last node is successfully deleted\n");
    }

}

void dePos()
{
    node *tmp=last->next;
    int pos, i, n;

    printf("enter position: ");
    scanf("%d",&pos);

    n=count();
    if(pos>=1 && pos<=n)
    {
       if(pos==1)
       {
          deStart();
       }
       else if(pos==n)
       {
           deLast();
       }
       else
       {
           for(i=1;i<pos;i++)
           {
               tmp=tmp->next;
           }
           tmp->next->prev = tmp->prev;
           tmp->prev->next=tmp->next;
           free(tmp);
           printf("node is successfully deleted\n");
       }

    }
}

void bubbleSort(node *last)
{
    node *ptr ;
    node *start=last->next;

    int flag;

    if (start==NULL)
        return;
    do
    {
        flag = 0;
        ptr = start;

        while (ptr->next != start)
        {
            if (ptr->data   >   ptr->next->data)
            {
                swap(ptr, ptr->next);
                flag = 1;
            }
            ptr = ptr->next;
        }
        last = ptr;
    }
    while (flag==1);

    printf("linked list is sorted now\n");
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
    int ele,ch,n;
    while(1)
    {

           printf("\n\n1. insert at last \n2. insert at start \n3. insert at position\n");
           printf("4. delete at last\n5. delete at start\n6. delete at position\n");
           printf("7. display\n8. count \n9. bubbleSort\n10. exit\n");

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
                   printf("empty\n");
               }
               else
               {
                   display();
               }
           }
           else if(ch==8)
           {
               if(last==NULL)
               {
                   printf("empty\n");
               }
               else
               {
                   n=count();
                   printf("number nodes are %d\n",n);
               }
           }
           else if(ch==9)
           {
               bubbleSort(last);
           }
           else if(ch==10)
           {
               exit(1);
           }
           else
           {
               printf("wrong choice\n");
           }
    }
}
