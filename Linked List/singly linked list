#include<stdio.h>
#include<stdlib.h>

typedef struct students
{
    int roll;
    char name[20];
    struct students *next;
}stu;

stu *start=NULL;

stu * createNode()
{
    stu *ptr;

    ptr=(stu *)malloc(sizeof(stu));

    printf("enter roll no:  ");
    scanf("%d",&ptr->roll);
    printf("enter name:  ");
    scanf("%s",ptr->name);

    ptr->next=NULL;
    return ptr;
}

int count()
{
    stu *tmp=start;
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
    printf("no of elements are %d\n",c);
    return c;

}

void swap(stu *a, stu *b)
{
    int temp = a->roll;
    a->roll = b->roll;
    b->roll = temp;
}

void addNodeAtLast()
{
    stu *ptr,*tmp;
    ptr=createNode();

    if(start==NULL)
    {
        start=ptr;
    }
    else
    {
        tmp=start;
        while(tmp->next != NULL)
        {
            tmp=tmp->next;
        }
        tmp->next=ptr;
    }
}

void addNodeAtStart()
{
    stu *ptr,*tmp;
    ptr=createNode();

    ptr->next=start;
    start=ptr;
}

void addNodeAtPos()
{
    stu *ptr, *tmp=start;
    int pos, i, n;


    printf("enter position: ");
    scanf("%d",&pos);

    n=count();


    if(pos >= 1 && pos<=n+1)
    {
       if(pos == 1)
       {
          addNodeAtStart();
       }
       else if(pos==n+1)
       {
           addNodeAtLast();

       }
       else
       {
           ptr=createNode();
           tmp=start;
           for(i=1;i<pos-1;i++)
           {
               tmp=tmp->next;
           }
           ptr->next = tmp->next;
           tmp->next = ptr;
       }

    }

}

void deleteAtStart()
{

    stu *tmp=start;
    start=start->next;
    free(tmp);

    printf("successfully deleted in beginning\n");
}

void deleteAtLast()
{

    if(start == NULL)
    {
        printf("0 element / nothing found");
    }
    else if(start -> next == NULL)
    {
        stu *ptr =start;
        start=NULL;
        free(ptr);
        printf("it has only one element which is now deleted");
    }
    else
    {
        stu *ptr;
        stu *tmp=start;
        while(tmp ->next != NULL)
        {
            ptr=tmp;
            tmp=tmp->next;
        }
        ptr->next=NULL;
        free(tmp);
    }

}

void deleteAtPos()
{
    stu *tmp=start,*ptr, *node;
    int pos, i, n;


    printf("enter position: ");
    scanf("%d",&pos);

    n=count();


    if(pos >= 1 && pos<=n)
    {
       if(pos == 1)
       {
          deleteAtStart();
       }
       else if(pos==n)
       {
           deleteAtLast();

       }
       else
       {
           for(i=1;i<pos-1;i++)
           {
               tmp=tmp->next;
           }

           ptr = tmp ->next;
           tmp -> next  = ptr -> next;
           ptr->next=NULL;
           free(ptr);
       }

    }
}

void reverse()
{
    stu *previous=NULL,*current=start,*nextnode=start;
    while(nextnode != NULL)
    {
        nextnode=nextnode-> next;
        current->next=previous;
        previous=current;
        current=nextnode;
    }
    start=previous;
    printf("linked list is reversed");
}

stu *middleNode(stu * start)
{
    stu *ptr=start;
    stu *tmp=start;
    while(tmp != NULL && tmp ->next != NULL)
    {
        ptr=ptr->next;
        tmp=tmp->next->next;
    }
    printf("middle element is %d %s\n",ptr->roll,ptr->name);
    return ptr;
}

void bubbleSort(stu *start)
{
    stu *ptr , *last=NULL;
    int flag;

    if (start==NULL)
        return;
    do   {
        flag = 0;
        ptr = start;

        while (ptr->next != NULL)
        {
            if (ptr->roll   >   ptr->next->roll)
            {
                swap(ptr, ptr->next);
                flag = 1;
            }
            ptr = ptr->next;
        }
        last = ptr;
    }
    while (flag);
    printf("linked list is sorted now\n");
}



void display()
{
    stu *tmp;

    if(start==NULL)
    {
        printf("not found\n");
    }
    else
    {
        tmp=start;
        while( tmp != NULL)
        {
            printf("\nstudent roll no: %d & name: %s\n",tmp->roll,tmp->name);
            tmp=tmp->next;
        }

    }
}

int main()
{
    int ch;
    stu *mid,*head=start;

    while(1)
    {
        printf("\n1. add at last\n");
        printf("2. add at start\n");
        printf("3. add at position\n");
        printf("4. delete at last\n");
        printf("5. delete at start\n");
        printf("6. delete at position\n");
        printf("7. display\n");
        printf("8. reverse\n");
        printf("9. middle node address\n");
        printf("10. bubble sort\n");
        printf("11. exit\n");

        printf("enter choice:  ");
        scanf("%d",&ch);

        if(ch==1)
        {
            addNodeAtLast();
        }
        else if(ch==2)
        {
            addNodeAtStart();
        }
        else if(ch==3)
        {
            addNodeAtPos();
        }
        else if(ch==4)
        {
            deleteAtLast();
        }
        else if(ch==5)
        {
            deleteAtStart();
        }
        else if(ch==6)
        {
            deleteAtPos();
        }
        else if(ch==7)
        {
            display();
        }
        else if(ch==8)
        {
            reverse();
        }
        else if(ch==9)
        {
            mid=middleNode(start);

            printf("middle element is %d %s\n",mid->roll,mid->name);
        }
        else if(ch==10)
        {
            bubbleSort(start);
        }
        else if(ch==11)
        {
            exit(1);
        }
        else
            printf("wrong choice");

    }

    return 0;
}
