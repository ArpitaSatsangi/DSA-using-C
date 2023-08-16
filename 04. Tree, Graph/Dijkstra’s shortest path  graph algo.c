#include<stdio.h>
#define INFINITY 9999
#define MAX 20

void dir_graph(int adjMat[][20],int n)
{
    int edges=0,w,i,j,s=0,d=0;
    edges=n*(n-1);

    for(i=1;i<=edges;i++)
    {
        printf("Enter edge %d (-1 -1 to quit): ",i);
        scanf("%d%d",&s,&d);

        if(s==-1 && d==-1)
        {
            break;
        }
        if(s>=n || d>=n || s<0 || d<0)
        {
            printf("Invalid edge!\n");
            i--;
        }
        else
        {
            printf("Enter Weight : ");
            scanf("%d",&w);
            adjMat[s][d] = w;
        }
    }
}

void display(int adjMat[][20],int n)
{
    int i,j;

    printf("\nThe adjacency matrix is :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",adjMat[i][j]);
        }
        printf("\n");
    }
}

int minWeight(int distance[],int visited[],int n)
{
    int minIndex=-1,i;

    for(i=0;i<n;i++)
    {
        if(visited[i]==0 && (minIndex=-1 || distance[i]<distance[minIndex]))
        {
            minIndex = i;
        }
    }

    return minIndex;
}

void dijkstra(int adjMat[][20],int n,int u)
{
    int distance[n],visited[n];
    int i,j,newdis;

    for(i=0;i<n;i++)
    {
        distance[i]=INFINITY;
        visited[i]=0;
    }

    distance[u]=0;

    for(i=0;i<n-1;i++)
    {
        u = minWeight(distance,visited,n);
        visited[u] = 1;

        for(j=0;j<n;j++)
        {
            if(adjMat[u][j]!=0 && visited[j]==0 && distance[u]!=INFINITY)
            {
                newdis = distance[u] + adjMat[u][j];

                if(newdis<distance[j])
                {
                    distance[j]=newdis;
                }
            }
        }
    }


    //Print Distance Table
    printf("\n\nDistance Table: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",distance[i]);
    }


}

int main()
{
    int adjMat[MAX][MAX] = {0};
    int n,u,v;

    printf("Enter number of vertices : ");
    scanf("%d",&n);

    dir_graph(adjMat,n);

    display(adjMat,n);

    //printf("Enter The Source: ");
    //scanf("%d",&u);
    //printf("Enter The Destination: ");
    //scanf("%d",&v);

    dijkstra(adjMat,n,0);

    return 0;
}
