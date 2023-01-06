#include <stdio.h>
int main()
{
    int a[2][10],i,m,n,j,k=0,x,y,z,b[2][10];
    int c[2][20];//addition
    printf("1. enter number of terms  ");
    scanf("%d", &m);
    printf("1.enter first polynomial  \n");
    for(i=0;i<m;i++)
    {
        printf("enter coeff and expo  ");
        scanf("%d %d", &a[0][i], &a[1][i]);
    }
    printf("\n1.polynomial:  \n");
    for(i=0;i<=m-1;i++)
    {
        printf("%dx^%d",a[0][i],a[1][i]);
        if(i!=m-1)
            printf(" + ");
    }

    printf("\n\n2.enter number of terms  ");
    scanf("%d", &n);
    printf("2.enter second polynomial  \n");
    for(j=0;j<n;j++)
    {
        printf("enter coeff and expo  ");
        scanf("%d %d", &b[0][j], &b[1][j]);
    }
    printf("\n2.polynomial:  \n");
    for(j=0;j<=n-1;j++)
    {
        printf("%dx^%d",b[0][j],b[1][j]);
        if(j!=n-1)
            printf(" + ");
    }

    i=j=k=0;
    while(i<=m-1&&j<=n-1)
    {
        if(a[1][i]<b[1][j])
        {
            c[0][k]=a[0][i];
            c[1][k]=a[1][i];
            i++;
            k++;
        }
        else if(a[1][i]>b[1][j])
        {
            c[0][k]=b[0][j];
            c[1][k]=b[1][j];
            j++;
            k++;
        }
        else
        {
            c[0][k]=b[0][j]+a[0][i];
            c[1][k]=b[1][j];
            i++;
            j++;
            if(c[0][k]!=0)
               k++;
        }

    }
    while(i<=m-1)
    {
        c[0][k]=a[0][i];
        c[1][k]=a[1][i];
        i++;
        k++;
    }
    while(j<=n-1)
    {
        c[0][k]=b[0][j];
        c[1][k]=b[1][j];
        j++;
        k++;
    }


    printf("\n\n3.addition polynomial:  \n");
    for(i=0;i<k;i++)
    {
        if(i==k-1)
            printf("%dx^%d",c[0][i],c[1][i]);
        else
            printf("%dx^%d + ",c[0][i],c[1][i]);
    }


    return 0;
}
