#include <stdio.h>
#include <stdlib.h>

int max(int m,int n)
{
    return ((m>n)? m:n);
}

int *add(int a[],int b[],int m,int n)
{
    int size=max(m,n);
    static  int c[100];
    int i;
    for(i=0;i<size;i++)
    {
        c[i]=0;
    }
    for(i=0;i<m;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        c[i]+=b[i];
    }
    return c;

}

int *multi(int a[],int b[],int m,int n)
{
    static int multiple[10];
    int i,j;
    for(i=0;i<m+n-1;i++)
    {
        multiple[i]=0;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            multiple[i+j]+=a[i]*b[j];
        }
    }

    return multiple;
}


void printpoly(int a[],int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        printf("%d ",a[i]);
        if(i!=0)
            printf("x^%d",i);
        if(i!=m-1)
            printf(" + ");
    }
}


int main()
{
    int arr1[20],arr2[20],j, i, n, m;

    printf("enter the degree of first polynomial: \n");
    scanf("%d",&m);
    printf("enter the coefficients:\n");
    for(i=0;i<=m-1;i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("enter the degree of second polynomial: \n");
    scanf("%d",&n);
    printf("enter the coefficients :\n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr2[i]);
    }

    int size=max(m,n);
    int *c=add(arr1,arr2,m,n);
    int *multiple=multi(arr1,arr2,m,n);

    printf("\nfirst polynomial\n");
    printpoly(arr1,m);
    printf("\nsecond polynomial\n");
    printpoly(arr2,n);
    printf("\naddition polynomial\n");
    printpoly(c,size);
    printf("\nmultiplition polynomial\n");
    printpoly(multiple,m+n-1);

    return 0;
}
