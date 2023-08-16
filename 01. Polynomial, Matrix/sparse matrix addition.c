#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a[10][3],i,j,m1,n1,m2,n2,k,x,y,z,b[10][3],s,c[20][3];
    printf("enter rows for first ");
    scanf("%d", &m1);
    printf("enter columns for first ");
    scanf("%d", &n1);
    printf("enter elements for first ");
    scanf("%d", &x);
    printf("enter first polynomial\n");
    for(i=1;i<=x;i++)
    {
        printf("row ");
        scanf("%d", &a[i][0]);
        printf("column ");
        scanf("%d",&a[i][1]);
        printf("element ");
        scanf("%d",&a[i][2]);
    }
    a[0][0]=m1,a[0][1]=n1,a[0][2]=x;


    printf("enter rows for second ");
    scanf("%d", &m2);
    printf("enter columns for second ");
    scanf("%d", &n2);
    printf("enter elements for second ");
    scanf("%d", &y);
    printf("enter first polynomial\n");
    for(i=1;i<=y;i++)
    {
        printf("row ");
        scanf("%d", &b[i][0]);
        printf("column ");
        scanf("%d",&b[i][1]);
        printf("element ");
        scanf("%d",&b[i][2]);
    }
    b[0][0]=m2,b[0][1]=n2,b[0][2]=y;

    if(m1!=m2 || n1!=n2)
    {
        printf("addition not possible");
        exit(0);
    }


    i=j=k=1;
    while(i<=x&&j<=y)
    {
        if(a[i][0]==b[j][0])
        {
            if(a[i][1]==b[j][1])
            {
                s=a[i][2]+b[j][2];
                if(s!=0)
                {
                    c[k][0]=a[i][0];
                    c[k][1]=a[i][1];
                    c[k][2]=s;
                    k++;
                }
                i++;
                j++;
            }
            else
            {
                if(a[i][1]<b[j][1])
                {
                    c[k][0]=a[i][0];
                    c[k][1]=a[i][1];
                    c[k][2]=a[i][2];
                    i++;
                }
                else
                {
                    c[k][0]=b[j][0];
                    c[k][1]=b[j][1];
                    c[k][2]=b[j][2];
                    j++;
                }
                k++;
            }
        }
        else if(a[i][0]<b[j][0])
        {
            c[k][0]=a[i][0];
                    c[k][1]=a[i][1];
                    c[k][2]=a[i][2];
                    i++;
                    k++;
        }
        else
        {
            c[k][0]=b[j][0];
                    c[k][1]=b[j][1];
                    c[k][2]=b[j][2];
                    j++;
                    k++;
        }
    }
    while(i<=x)
    {
        c[k][0]=a[i][0];
                    c[k][1]=a[i][1];
                    c[k][2]=a[i][2];
                    i++;
                    k++;
    }
    while(j<=y)
    {
        c[k][0]=b[j][0];
                    c[k][1]=b[j][1];
                    c[k][2]=b[j][2];
                    j++;
                    k++;
    }

    c[0][0]=m1,c[0][1]=n1,c[0][2]=k;

    printf("\nfirst\n");
    for(i=0;i<=x;i++)
        printf("%d  %d  %d\n",a[i][0],a[i][1],a[i][2]);
    printf("\nsecond\n");
    for(i=0;i<=y;i++)
        printf("%d  %d  %d\n",b[i][0],b[i][1],b[i][2]);
    printf("\nadd\n");
    for(i=0;i<k;i++)
        printf("%d  %d  %d\n",c[i][0],c[i][1],c[i][2]);


    return 0;
}
