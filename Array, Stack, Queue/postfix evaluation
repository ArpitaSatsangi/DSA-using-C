#include<stdio.h>
#include<string.h>
#define MAX 100

int stack[MAX];
int top=-1;

void push(int ele)
{
    stack[++top]=ele;
}

int pop()
{
    return stack[top--];
}

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

void calc(char op)
{
    int a,b,c;

    a=pop();
    b=pop();

    if(op=='+')
        c=b+a;
    else if(op=='-')
        c=b-a;
    else if(op=='*')
        c=b*a;
    else if(op=='/')
        c=b/a;

    push(c);
}

int main()
{
    char postfix[MAX],ch,x;
    int i,j=0;

    printf("Enter Your Valid Postfix Expression : ");
    scanf("%s",postfix);

    for(i=0;i<strlen(postfix);i++)
    {
        ch=postfix[i];

        if(ch>='0'&&ch<='9')
        {
            push(ch-48);
        }
        else if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
        {
            calc(ch);
        }
        else
        {
            printf("Invalid Expression\n");
            exit(1);
        }
    }

    printf("Total : %d\n",stack[top]);

    return 0;
}
