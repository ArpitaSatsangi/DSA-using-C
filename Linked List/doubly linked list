#include <stdio.h>
#include <stdlib.h>

typedef struct doubly_linked_list
{
    int data;
    struct doubly_linked_list *next;
    struct doubly_linked_list *prev;
}node;

node * start=NULL;

int count()
{
    node *tmp=start;
    int c=0;
    if(tmp==NULL)
    {
        return c;
    }
    while(tmp != NULL)
    {
        tmp = tmp->next;
        c++;
    }
    return c;
}

void inStart(int ele)
{
    node *ptr,*tmp;
    ptr=(node *)malloc(sizeof(node));
    ptr->data=ele;

    ptr->next=start;
    if(start!=NULL)
    {
        start->prev=ptr;
    }
    start=ptr;
}

void inLast(int ele)
{
    node *ptr,*tmp;
    ptr=(node *)malloc(sizeof(node));
    ptr->data=ele;
    if(start==NULL)
    {
        inStart(ele);
    }
    else
    {
        tmp=start;
        while(tmp->next != NULL)
        {
            tmp=tmp->next;
        }
        tmp->next=ptr;
        ptr->prev=tmp;
        ptr->next=NULL;
    }
}

void inPos(int ele)
{
    node *ptr, *tmp=start;
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

           tmp=start;
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
    node *ptr=start;
    ptr->next->prev=NULL;
    start=start->next;

    free(ptr);
    printf("successfully deleted in beginning\n");
}

void deLast()
{

    if(start == NULL)
    {
        printf("0 element / nothing found");
    }
    else if(start -> next == NULL)
    {
        node *ptr =start;
        start=NULL;
        free(ptr);
        printf("it has only one element which is now deleted");
    }
    else
    {
        node *ptr;
        node *tmp=start;
        while(tmp ->next != NULL)
        {
            ptr=tmp;
            tmp=tmp->next;
        }
        ptr->next=NULL;
        free(tmp);
        printf("successfully deleted in last\n");
    }

}

void dePos()
{
    node *tmp=start,*ptr;
    int pos, i, n;


    printf("enter position: ");
    scanf("%d",&pos);

    n=count();
    if(pos >= 1 && pos<=n)
    {
       if(pos == 1)
       {
          deStart();
       }
       else if(pos==n)
       {
           deLast();
       }
       else
       {
           for(i=1;i<pos-1;i++)
           {
               tmp=tmp->next;
           }
           ptr = tmp ->next;
           tmp -> next  = ptr -> next;
           ptr->next->prev=tmp;
           free(ptr);
       }

    }
}

void display()
{
    node *tmp;

    if(start==NULL)
    {
        printf("not found\n");
    }
    else
    {
        tmp=start;
        while( tmp != NULL)
        {
            printf("\ndata: %d \n",tmp->data);
            tmp=tmp->next;
        }
    }
}

int main()
{
    int ch,ele;
    node *mid,*head=start;

    while(1)
    {
        printf("\n1. add at last\n");
        printf("2. add at start\n");
        printf("3. add at position\n");
        printf("4. delete at last\n");
        printf("5. delete at start\n");
        printf("6. delete at position\n");
        printf("7. display\n");
        printf("8. exit\n");

        printf("enter choice:  ");
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
            deLast();
        }
        else if(ch==5)
        {
            deStart();
        }
        else if(ch==6)
        {
            dePos();
        }
        else if(ch==7)
        {
            display();
        }
        else if(ch==8)
        {
            exit(1);
        }
        else
            printf("wrong choice");
        }
    return 0;
}
