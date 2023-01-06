
#include<stdio.h>
#define SIZE 100

int minHeap[SIZE];
int n=-1;

int left(int i)
{
    return 2*i+1;
}

int right(int i)
{
    return 2*i+2;
}

int parent(int i)
{
    return (i-1)/2;
}

void insert(int ele)
{
    if(n==SIZE-1)
        return;

    minHeap[++n]=ele;

    int i,t;

    i=n;

    while(i>0 && minHeap[parent(i)]>minHeap[i])
    {
        t = minHeap[i];
        minHeap[i] = minHeap[parent(i)];
        minHeap[parent(i)] = t;

        i = parent(i);
    }
}

void display()
{
    if(n==-1)
        return;

    int i;

    printf("Min Heap Elements: ");
    for(i=0;i<=n;i++)
    {
        printf("%d ",minHeap[i]);
    }
}

void minHeapify(int i)
{
    int li,ri,si,t;

    li = left(i);
    ri = right(i);
    si = i;

    if(li<=n && minHeap[li]<minHeap[si])
        si = li;
    if(ri<=n && minHeap[ri]<minHeap[si])
        si = ri;

    if(si!=i)
    {
        t = minHeap[i];
        minHeap[i] = minHeap[si];
        minHeap[si] = t;

        minHeapify(si);
    }
}

int extractMin()
{
    if(n==0)
        return minHeap[n--];

    int t = minHeap[0];
    minHeap[0] = minHeap[n];
    minHeap[n] = t;

    n--;

    minHeapify(0);

    return minHeap[n+1];
}

int main()
{
    char ch,ele;

    while(1)
    {
        printf("\n\n");
        printf("1. Insert Element\n");
        printf("2. Display Elements\n");
        printf("3. Extract Min\n");
        printf("4. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d",&ch);

        if(ch==1)
        {
            printf("Enter Element: ");
            scanf("%d",&ele);

            insert(ele);
        }
        else if(ch==2)
        {
            display();
        }
        else if(ch==3)
        {
            ele = extractMin();
            printf("Minimum Element: %d\n",ele);
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
