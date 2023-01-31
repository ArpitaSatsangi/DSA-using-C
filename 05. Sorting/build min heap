#include<stdio.h>

int minHeap[]={25,86,34,15,90,18,45,30,60,48};
int n=9;

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

void buildMinHeap()
{
    int i;

    for(i=parent(n);i>=0;i--)
    {
        minHeapify(i);
    }
}

int main()
{
    int i;
    printf("Simple Array: ");
    for(i=0;i<=n;i++)
    {
        printf("%d ",minHeap[i]);
    }

    buildMinHeap();

    printf("\nMin Heap Elements: ");
    for(i=0;i<=n;i++)
    {
        printf("%d ",minHeap[i]);
    }

    return 0;
}
