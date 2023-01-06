#include<stdio.h>
#define MAX 100

int stack[MAX];
int top=-1;

int isUnderflow()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

int isOverflow()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}

void push(int ele)
{
    stack[++top]=ele;
}

int pop()
{
    return stack[top--];
}

void display()
{
    int i;

    printf("Stack Elements : ");
    for(i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
}


int main()
{
    int ch,ele;

    while(1)
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);

        if(ch==1)
        {
            if(isOverflow())
            {
                printf("Stack is Full\n");
            }
            else
            {
               printf("Enter Element : ");
               scanf("%d",&ele);

               push(ele);

               printf("%d Element successfully pushed\n",ele);
            }
        }
        else if(ch==2)
        {
            if(isUnderflow())
            {
                printf("Stack is Empty\n");
            }
            else
            {
                ele = pop();
                printf("%d Element successfully poped\n",ele);
            }
        }
        else if(ch==3)
        {
            display();
        }
        else if(ch==4)
        {
            break;
        }
        else
        {
            printf("Wrong Choice\n");
        }
    }

    return 0;
}
