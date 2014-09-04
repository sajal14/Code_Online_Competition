
#include <stdio.h>
#define MAX 101

typedef enum boolean{false,true} bool;
int adj[MAX][MAX];
bool visited[MAX];
int n; /* Denotes number of nodes in the graph */

int node[100][100];
int main()
{
int i,v,choice,j,r,c;
int s[100];
scanf("%d",&r);
scanf("%d",&c);
for(i=0;i<r;i++)
{
   for(j=0;j<c;j++)
   {
       scanf("%d")
   }

}

return 0;
}

void create_graph()
{
    int i,max_edges,origin,destin;

    printf("Enter number of nodes : ");
    scanf("%d",&n);
    max_edges=n*(n-1);

    for(i=1;i<=max_edges;i++)
    {

        printf("Enter edge %d( 0 0 to quit ) : ",i);
        scanf("%d %d",&origin,&destin);

        if((origin==0) && (destin==0))
        break;

        if( origin > n || destin > n || origin<=0 || destin<=0)
        {
            printf("Invalid edge!\n");
            i--;
        }
        else
        {
        adj[origin][destin]=1;
        adj[destin][origin]=1; /*<= this is for undirected graph*/
        }
    }
}

display()
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf("%4d",adj[i][j]);

        printf("\n");
    }
}

dfs_rec(int v)
{
int i;
visited[v]=true;

printf("%d ",v);
for(i=1;i<=n;i++)
if(adj[v][i]==1 && visited[i]==false)
dfs_rec(i);
}/*End of dfs_rec()*/

dfs(int v)
{
int i,stack[MAX],top=-1,pop_v,j,t;
int ch;

top++;
stack[top]=v;
while (top>=0)
{
pop_v=stack[top];
top--; /*pop from stack*/
if( visited[pop_v]==false)
{
printf("%d ",pop_v);
visited[pop_v]=true;
}
else
continue;

for(i=n;i>=1;i--)
{
if( adj[pop_v][i]==1 && visited[i]==false)
{
top++; /* push all unvisited neighbours of pop_v */
stack[top]=i;
}/*End of if*/
}/*End of for*/
}/*End of while*/
}/*End of dfs()*/

int dist[10]={0};
bfs(int v)
{
    int i,front,rear;
        int que[20];
        front=rear= -1;

    visited[v]=true;/*source node is visited.Hence true*/

    rear++;
    front++;

    que[rear]=v; /*adding source node in the queue*/
    dist[v]=0;
    while(front<=rear)/*i.e. queue is not empty*/
    {

        v=que[front];	 /* DEQUEUEING .delete from queue */
        front++;


        for(i=1;(i<=n);i++)
        {
            /* Check for adjacent unvisited nodes */
            if( adj[v][i]==1 && visited[i]==false)
            {
                visited[i]=true;
                dist[i]=dist[v]+1;
                printf("%d dis from src: %d\n",i,dist[i]);
                rear++;
                que[rear]=i;
            }
        }
    }
}

adj_nodes(int v)
{
int i;
for(i=1;i<=n;i++)
if(adj[v][i]==1)
printf("%d ",i);
printf("\n");
}/*End of adj_nodes()*/

components()
{
int i;
for(i=1;i<=n;i++)
visited[i]=false;
for(i=1;i<=n;i++)
{
if(visited[i]==false)
dfs_rec(i);
}
printf("\n");
}/*End of components()*/
