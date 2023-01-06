//convert sparse matrix into triplet form
//convert triplet form into sparse matrix
#include <stdio.h>
int main()
{
    int sparse[3][3],news[3][3], triplet[10][3],n,m,t=0,i,j,k=1;
    //rows=columns=3
    printf("enter sparse: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &sparse[i][j]);
        }
    }

    printf("sparse :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", sparse[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(sparse[i][j]!=0)
                t++;//number of no zero terms
        }
    }

    triplet[0][0]=3;
    triplet[0][1]=3;
    triplet[0][2]=t;

    k=1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(sparse[i][j]!=0)
            {
            triplet[k][0]=i;
            triplet[k][1]=j;
            triplet[k][2]=sparse[i][j];
            k++;
            }
        }
    }

    printf("triplet form:\n");
    for(k=0;k<=t;k++)
        printf("%d\t%d\t%d\n", triplet[k][0],triplet[k][1],triplet[k][2]);



    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            news[i][j]=0;
        }
    }


    i=j=0;
    for(k=1;k<=t;k++)
    {
        i=triplet[k][0];
        j=triplet[k][1];
        news[i][j]=triplet[k][2];
        i++;
        j++;
    }

    printf("new sparse :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", news[i][j]);
        }
        printf("\n");
    }


    return 0;
}
