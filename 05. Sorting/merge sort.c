#include <stdio.h>
#define MAX 100

void mergeSort(int arr[],int low,int mid,int high)
{
    int i,j,k,temp[high-low+1];

    i = low;
    j = mid + 1;
    k = 0;

    while(i<=mid && j<=high)       //while elements in both lists
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while(i<=mid)
    {
        temp[k++] = arr[i++];
    }

    while(j<=high)
    {
        temp[k++] = arr[j++];
    }

    k=0;

    for(i=low;i<=high;i++)       //Transfer elements from temp[] back to a[]
    {
        arr[i] = temp[k++];
    }
}

void partition(int arr[],int low,int high)
{
    if(low < high)
    {
        int mid=(low + high)/2;
        partition(arr, low, mid);           //left recursion
        partition(arr, mid+1, high);        //right recursion
        mergeSort(arr, low, mid, high);     //merging of two sorted sub-arrays
    }
}

int main()
{
    int arr[MAX],i,n;

    printf("Enter total number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter %d element: ",(i+1));
        scanf("%d",&arr[i]);
    }

    partition(arr,0,n-1);

    printf("After merge sort: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
