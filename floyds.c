#include <stdio.h>
int min(int a,int b)
{
    return(a<b)? a:b;
}
read_adjacency_matrix(int D[10][10],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&D[i][j]);
        }
    }
}
void floyd(int D[10][10], int n)
{
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                D[i][j]=min(D[i][j],(D[i][k]+D[k][j]));
            }
        }
    }
    printf("The shortest path:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",D[i][j]);
        }
        printf("\n");
    }
}
void main()
{
    int D[10][10],n;
    printf("enter the no. of vertices\n");
    scanf("%d",&n);
    printf("enter the adjacency matrix\n");
    read_adjacency_matrix(D,n);
    floyd(D,n);
}
