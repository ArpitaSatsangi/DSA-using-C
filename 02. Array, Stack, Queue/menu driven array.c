#include <stdio.h>
#include <stdlib.h>
#define max 20
int arr[max];
int n=-1;

int isFull()
{
    if(n==max-1)
        return 1;
    else
        return 0;
}
int isEmpty()
{
    if(n==-1)
        return 1;
    else
        return 0;

}
void inBig(int ele)
{
    int i;
    for(i=n;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }

    arr[0]=ele;
    n++;
    printf("%d is successfully inserted in beginning",ele);
}
void inEnd(int ele)
{
    n++;
    arr[n]=ele;
    printf("%d is successfully inserted in end",ele);
}
void inPos(int ele,int pos)
{
    int i;
    for(i=n;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }

    arr[pos]=ele;
    n++;
    printf("%d is successfully inserted in position/index %d",ele,pos);
}
void deBig()
{
    int i;
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    printf("successfully deleted in beginning");
}
void deEnd()
{
    n--;
    printf("successfully deleted in end");
}
void dePos(int pos)
{
    int i;
    for(i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    printf("successfully deleted in from index/position %d",pos);
}
void display()
{
    int i;
    printf("elements of array are:  ");
    for(i=0;i<=n;i++)
    {
        printf("%d    ",arr[i]);
    }
}


int main()
{
    int choice,pos,ele, arr[20];

    while(1)
    {
        printf("\n\n1.insert at beginning \n2.insert at end \n3.insert at given position\n4.delete at beginning \n5.delete at end \n6.delete at given position\n7.display\n8.exit\nenter your choice:");
        scanf("%d",&choice);
        if(choice==1)
        {
            if(isFull()==1)
                printf("full");
            else
            {
                printf("enter element: ");
                scanf("%d",&ele);
                inBig(ele);
            }

        }
        else if(choice==2)
        {
            if(isFull()==1)
                printf("full");
            else
            {
                printf("enter element: ");
                scanf("%d",&ele);
                inEnd(ele);
            }

        }
        else if(choice==3)
        {
            if(isFull()==1)
                printf("full");
            else
            {
                printf("enter element: ");
                scanf("%d",&ele);
                printf("enter podsition: ");
                scanf("%d",&pos);
                inPos(ele,pos);
            }

        }
        else if(choice==4)
        {
            if(isEmpty()==1)
                printf("empty");
            else
            {
                deBig();
            }

        }
        else if(choice==5)
        {
            if(isEmpty()==1)
                printf("empty");
            else
            {
                deEnd();
            }
        }
        else if(choice==6)
        {
            if(isEmpty()==1)
                printf("empty");
            else
            {
                printf("enter position: ");
                scanf("%d",&pos);
                dePos(pos);
            }

        }
        else if(choice==7)
        {
            if(isEmpty()==1)
                printf("empty");
            else
            {
                display();
            }

        }
        else if(choice==8)
        {
            exit(1);
        }

    }
return 0;
}
