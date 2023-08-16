#include <stdio.h>
int main()
{
    int a[2][10],i,m,n,j,b[2][10],flag,p=0,q=0;
    int c[2][20];
    int d[2][20];
    printf("first enter number of terms  ");
    scanf("%d", &m);
    printf("first enter first polynomial  \n");
    for(i=0;i<m;i++)
    {
        printf("enter coeff and expo  ");
        scanf("%d %d", &a[0][i], &a[1][i]);
    }
    printf("\nfirst polynomial:  \n");
    for(i=0;i<=m-1;i++)
    {
        printf("%dx^%d",a[0][i],a[1][i]);
        if(i!=m-1)
            printf(" + ");
    }

    printf("\n\nsecond enter number of terms  ");
    scanf("%d", &n);
    printf("second enter second polynomial  \n");
    for(j=0;j<n;j++)
    {
        printf("enter coeff and expo  ");
        scanf("%d %d", &b[0][j], &b[1][j]);
    }
    printf("\nsecond polynomial:  \n");
    for(j=0;j<=n-1;j++)
    {
        printf("%dx^%d",b[0][j],b[1][j]);
        if(j!=n-1)
            printf(" + ");
    }


    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[0][p] = a[0][i] * b[0][j];
            c[1][p] = a[1][i] + b[1][j];

            p++;
        }
    }

    for(i=0;i<p;i++)
    {
        flag=0;
        if(c[0][i] != 0)
        {
            for(j=i+1;j<p-1;j++)
            {
                if(c[1][i]==c[1][j])
                {
                    d[0][q]=c[0][i]+c[0][j];
                    d[1][q]=c[1][i];
                    q++;
                    c[0][j]=0;
                    c[1][j]=0;
                    flag=1;
                }
            }
            if(flag==0)
            {
                d[0][q]=c[0][i];
                d[1][q]=c[1][i];
                q++;
            }
        }
    }



    printf("\n\n4.multiplication polynomial:  \n");
    for(i=0;i<q;i++)
    {
        printf("%dx^%d",d[0][i],d[1][i]);
        if(i!=q-1)
            printf(" + ");
    }

    return 0;
}
