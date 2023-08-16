#include<stdio.h>
#define MAX 100

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int j,t,i=(low-1);

    for(j = low; j < high; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;

            t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }

    t = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = t;

    return i+1;
}

void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int partitionIndex = partition(arr, low, high);

        quickSort(arr, low, partitionIndex-1);
        quickSort(arr, partitionIndex+1, high);
    }
}

int main()
{
    //int arr[10] = {85,65,35,14,75,96,25,43,94,50};

    int arr[MAX],n,i;

    printf("Enter the number of element you want to Sort : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter %d Element: ",i+1);
        scanf("%d",&arr[i]);
    }

    quickSort(arr,0,n-1);

    printf("Sorted elements: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}



/*
1. QS(arr,low=0,high=9)
	pi = 4
	QS(arr,low=0,high=3) - 2
	QS(arr,low=5,high=9) - 4

2. QS(arr,low=0,high=3)
	pi = 3
	QS(arr,low=0,high=2) - 3
	QS(arr,low=4,high=3) - EC

3. QS(arr,low=0,high=2)
	pi = 1
	QS(arr,low=0,high=0) - EC
	QS(arr,low=2,high=2) - EC

4. QS(arr,low=5,high=9)
	pi = 6
	QS(arr,low=5,high=5) - EC
	QS(arr,low=7,high=9) - 5

5. QS(arr,low=7,high=9)
	pi = 7
	QS(arr,low=7,high=6) - EC
	QS(arr,low=8,high=9) - 6

6. QS(arr,low=8,high=9)
	pi = 9
	QS(arr,low=8,high=8) - EC
	QS(arr,low=10,high=9) - EC



*/
