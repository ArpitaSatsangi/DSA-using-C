#include<stdio.h>
#include<string.h>
#define MAX 100

char stack[MAX];
int top=-1;

void push(char ele)
{
    stack[++top]=ele;
}

char pop()
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

int getPriority(char op)
{
    if(op=='/'||op=='*')
        return 2;
    else if(op=='+'||op=='-')
        return 1;
    else
        return 0;
}

void reverse(char array[MAX]) // for reverse of the given expression
{
	int i,j;
	char temp[MAX];
	for (i=strlen(array)-1,j=0;  i+1!=0;  --i,++j) {
		temp[j]=array[i];
	}
	temp[j]='\0';
	strcpy(array,temp);
	return array;
}


int main()
{
    char infix[MAX],prefix[MAX],ch,x;
    int i,j=0;

    printf("Enter Your Valid Infix Expression : ");
    scanf("%s",infix);

    push('#');

    reverse(infix);
    for(i=0;i<strlen(infix);i++)
    {
        ch=infix[i];

        if(ch>='a'&&ch<='z' || ch>='A'&&ch<='Z' || ch>='0'&&ch<='9')
        {
            prefix[j++]=ch;
        }
        else if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
        {
            while(getPriority(ch)<=getPriority(stack[top]))
            {
                prefix[j++]=pop();
            }

            push(ch);
        }
        else if(ch==')')//reverse the braces
        {
            push(ch);
        }
        else if(ch=='(')
        {
            x=pop();

            while(x!=')')
            {
                prefix[j++]=x;
                x=pop();
            }
        }
        else
        {
            printf("Invalid Expression\n");
            exit(1);
        }
    }


    while(stack[top]!='#')
    {
        prefix[j++]=pop();
    }

    prefix[j]='\0';


    reverse(prefix);
    printf("Postfix Expression : %s",prefix);

    return 0;
}
