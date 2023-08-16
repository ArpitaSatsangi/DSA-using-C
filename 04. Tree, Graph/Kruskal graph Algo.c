#include<stdio.h>
#include<stdlib.h>
#define INFT 99
#define MAX 20

int parent[9]={0};

void fillMaxValue(int adjMat[][20],int n)
{
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            adjMat[i][j] = INFT;
        }
    }
}

void undir_graph(int adjMat[][20],int n)
{
    int edges=0,w,i,j,s=0,d=0;
    edges=n*(n-1)/2;

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
            adjMat[d][s] = w;
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

int find(int i)
{
while(parent[i])
    {
        i=parent[i];
    }

return i;
}

int uni(int u,int v)
{
if(u!=v)
{
parent[v]=u;
return 1;
}

return 0;
}

int main()
{
    int adjMat[MAX][MAX];
    int i,j,k,a,b,u,v,n,ne=0;
    int min,mincost=0;

    printf("Enter number of vertices : ");
    scanf("%d",&n);

    fillMaxValue(adjMat,n);

    undir_graph(adjMat,n);

    display(adjMat,n);

printf("\nThe edges of Minimum Weight Spanning Tree are\n");
while(ne<n-1)
{
   min=INFT;

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(adjMat[i][j] < min)
{
min=adjMat[i][j];
a=u=i;
b=v=j;
}
}
}

u=find(u);
v=find(v);

if(uni(u,v))
{
printf("Edge %d - %d and Weight: %d\n",a,b,min);
mincost+=min;
}

adjMat[a][b]=adjMat[b][a]=INFT;
ne++;
}

printf("\nTotal Minimum Weight = %d\n\n\n\n",mincost);

return 0;
}


/*
The steps for implementing Kruskal's algorithm are as follows:

Sort all the edges from low weight to high
Take the edge with  the lowest weight and add it to the spanning tree. If adding the edge created a cycle, then reject this edge.
Keep adding edges until we reach all vertices.

*/


/*
This algorithm will create spanning tree with minimum weight, from a given weighted graph.
Begin
Create the edge list of given graph, with their weights.
Sort the edge list according to their weights in ascending order.
Draw all the nodes to create skeleton for spanning tree.
Pick up the edge at the top of the edge list (i.e. edge with minimum weight).
Remove this edge from the edge list.
Connect the vertices in the skeleton with given edge. If by connecting the vertices, a cycle is created in the skeleton, then discard this edge.
Repeat steps 5 to 7, until n-1 edges are added or list of edges is over.
Return
*/
