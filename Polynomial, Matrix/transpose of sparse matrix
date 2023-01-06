#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a[10][3],i,p=0,q=1,m,n,x,b[10][3];
    printf("enter rows  ");
    scanf("%d", &m);
    printf("enter columns  ");
    scanf("%d", &n);
    printf("enter terms  ");
    scanf("%d", &x);
    printf("enter sparse matrix\n");
    for(i=1;i<=x;i++)
    {
        printf("row ");
        scanf("%d", &a[i][0]);
        printf("column ");
        scanf("%d",&a[i][1]);
        printf("element ");
        scanf("%d",&a[i][2]);
    }
    a[0][0]=m,a[0][1]=n,a[0][2]=x;
    b[0][0]=n,b[0][1]=m,b[0][2]=x;

    if(x!=0)
    {
        for(i=0;i<=n-1;i++)
        {
            for(p=1;p<=x;p++)
            {
                if(a[p][1]==i)
                {
                    b[q][0]=a[p][1];
                    b[q][1]=a[p][0];
                    b[q][2]=a[p][2];
                    q++;
                }
            }
        }
    }

    printf("\nsparse matrix\n");
    for(i=0;i<=x;i++)
        printf("%d  %d  %d\n",a[i][0],a[i][1],a[i][2]);
    printf("\ntranspose sparse matrix\n");
    for(i=0;i<=x;i++)
        printf("%d  %d  %d\n",b[i][0],b[i][1],b[i][2]);

    return 0;
}
