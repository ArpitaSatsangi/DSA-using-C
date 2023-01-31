#include<stdio.h>
#include<stdlib.h>

typedef struct xyz
{
    int value;
    struct xyz *next;
}node;

node * createNode(int ele)
{
    node *ptr;

    ptr = (node *)malloc(sizeof(node));
    ptr->value=ele;
    ptr->next=NULL;

    return ptr;
}

node * createLinkedList(int arr[],int n)
{
    node *start=NULL,*ptr,*tmp;
    int i;

    for(i=0;i<n;i++)
    {
        ptr = createNode(arr[i]);

        if(start==NULL)
        {
            start=ptr;
        }
        else
        {
            tmp = start;

            while(tmp->next!=NULL)
            {
                tmp=tmp->next;
            }

            tmp->next = ptr;
        }
    }

    return start;
}

void printLinkedList(node *start)
{
    if(start==NULL)
    {
        printf("Linked List Not Found\n");
    }
    else
    {
        printf("Linked List: ");
        while(start!=NULL)
        {
            printf("%d ",start->value);
            start=start->next;
        }

        printf("\n");
    }
}

node * getMidNode(node *start)
{
    node *slow,*fast;

    slow=start;
    fast=start->next;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

node * mergeSort(node *firstHalf,node *secondHalf)
{
    node *mergedList,*currentNode;

    if(firstHalf->value < secondHalf->value)
    {
        mergedList = firstHalf;
        firstHalf = firstHalf->next;
}
else
    {
mergedList = secondHalf;
secondHalf = secondHalf->next;
}

    currentNode = mergedList;

    while(firstHalf!=NULL && secondHalf!=NULL)
    {
if(firstHalf->value < secondHalf->value)
        {
currentNode->next = firstHalf;
firstHalf = firstHalf->next;
}
        else
        {
currentNode->next = secondHalf;
            secondHalf = secondHalf->next;
}

currentNode = currentNode->next;
}

if(firstHalf!=NULL || secondHalf!=NULL)
        currentNode->next = (firstHalf!=NULL) ? firstHalf : secondHalf;

return mergedList;
}

node * partition(node *start)
{
    if(start->next==NULL)
        return start;

    node *mid = getMidNode(start);
    //printf("Mid Value: %d\n",mid->value);
    node *rhead = mid->next;
    mid->next = NULL;

    node *firstHalf = partition(start);
    node *secondHalf = partition(rhead);

    return mergeSort(firstHalf,secondHalf);
}


int main()
{
    int arr[]={58,45,36,40,18,20,30};
    int n=7;
    node *start;

    start = createLinkedList(arr,n);

    printLinkedList(start);

    start = partition(start);

    printLinkedList(start);

    return 0;
}
