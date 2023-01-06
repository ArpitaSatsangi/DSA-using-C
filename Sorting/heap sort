#include<stdio.h>

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

void maxHeapify(int arr[],int n,int i)
{
    int li,ri,lg,t;

    li = left(i);
    ri = right(i);
    lg = i;

    if(li<=n && arr[li]>arr[lg])
        lg = li;
    if(ri<=n && arr[ri]>arr[lg])
        lg = ri;

    if(lg!=i)
    {
        t = arr[i];
        arr[i] = arr[lg];
        arr[lg] = t;

        maxHeapify(arr,n,lg);
    }
}

void buildMaxHeap(int arr[],int n)
{
    int i;

    for(i=parent(n);i>=0;i--)
    {
        maxHeapify(arr,n,i);
    }
}

void heapSort(int arr[],int n)
{
    int i=n,t;

    buildMaxHeap(arr,n);

    printArray(arr,n);

    while(i>=0)
    {
        t = arr[0];
        arr[0] = arr[i];
        arr[i] = t;

        i--;

        maxHeapify(arr,i,0);
    }
}

void printArray(int arr[],int n)
{
    int i;

    printf("\nArray Elements: ");
    for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
}

int main()
{
    int arr[]={25,86,34,15,90,18,45,30,60,48};
    int n=9;

    printArray(arr,n);

    heapSort(arr,n);

    printArray(arr,n);

    return 0;
}
