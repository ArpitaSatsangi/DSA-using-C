#include<stdio.h>
#include<stdlib.h>

typedef struct xyz
{
    int coeff;
    int expo;
    struct xyz *next;
}node;

node * createNode(int coeff,int expo)
{
    node *ptr = (node *)malloc(sizeof(node));

    ptr->coeff = coeff;
    ptr->expo = expo;
    ptr->next = NULL;

    return ptr;
}

node * insert()
{
    int i,n,coeff,expo;
    node *start = NULL;

    printf("Enter the number of terms: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Enter the coefficient : ");
        scanf("%d",&coeff);

        printf("Enter the exponent : ");
        scanf("%d",&expo);

        node *newnode = createNode(coeff,expo);

        if(start==NULL)
        {
            start=newnode;
        }
        else if(newnode->expo > start->expo)
        {
            newnode->next = start;
            start = newnode;
        }
        else
        {
            node *tmp = start;

            while(tmp->next!=NULL && tmp->next->expo > newnode->expo)
            {
                tmp = tmp->next;
            }

            newnode->next = tmp->next;
            tmp->next = newnode;
        }
    }

    return start;
}

node * polyAdd(node *poly1,node *poly2)
{
    node *tmp,*start;
    int t;

    if(poly1->expo > poly2->expo)
    {
        tmp = createNode(poly1->coeff,poly1->expo);
        poly1 = poly1->next;
    }
    else if(poly2->expo > poly1->expo)
    {
        tmp = createNode(poly2->coeff,poly2->expo);
        poly2 = poly2->next;
    }
    else
    {
        t = poly1->coeff + poly2->coeff;
        tmp = createNode(t,poly1->expo);
        poly1 = poly1->next;
        poly2 = poly2->next;
    }

    start = tmp;

    while(poly1!=NULL && poly2!=NULL)
    {
        if(poly1->expo > poly2->expo)
        {
            tmp->next = createNode(poly1->coeff,poly1->expo);
            poly1 = poly1->next;
        }
        else if(poly2->expo > poly1->expo)
        {
            tmp->next = createNode(poly2->coeff,poly2->expo);
            poly2 = poly2->next;
        }
        else
        {
            t = poly1->coeff + poly2->coeff;
            tmp->next = createNode(t,poly1->expo);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }

        tmp = tmp->next;
    }

    while(poly1!=NULL)
    {
        tmp->next = createNode(poly1->coeff,poly1->expo);
        poly1 = poly1->next;
        tmp = tmp->next;
    }

    while(poly2!=NULL)
    {
        tmp->next = createNode(poly2->coeff,poly2->expo);
        poly2 = poly2->next;
        tmp = tmp->next;
    }

    return start;
}

void printPoly(node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%dx^%d + ",ptr->coeff,ptr->expo);
        ptr=ptr->next;
    }
}

int main()
{
    node *poly1,*poly2,*poly3;

    printf("Enter the first polynomial\n");
    poly1 = insert();

    printf("Enter the second polynomial\n");
    poly2 = insert();

    poly3 = polyAdd(poly1,poly2);

    printf("\nFirst Polynomial:\n");
    printPoly(poly1);

    printf("\nSecond Polynomial:\n");
    printPoly(poly2);

    printf("\nAddition:\n");
    printPoly(poly3);

    return 0;
}
