/*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int a[20][20],reach[20],n,trav[20], c=0;
void dfs(int v)
{
 int i;
 trav[c++] = v;
 reach[v]=1; // we have reached v th node, so marking it as reached
 for(i = 1;i <=n ;i++)
  if(a[v][i] && !reach[i]) // if ith node is adjascent to vth node and if i th node is not reached yet
   dfs(i); // then recursively call DFS starting at i th node
}
void main()
{
 int i,j,count=0;
  clock_t start, end;

 printf("\n Enter number of vertices:");
 scanf("%d", &n);
 for(i = 1;i <= n;i++)
 {
  reach[i]=0; // initialisation to zero
  for(j = 1;j <= n;j++)
   a[i][j]=0; // initialisation to zero
 }
 printf("\n Enter the adjacency matrix:\n");
 for(i = 1;i <= n;i++)
  for(j = 1;j <= n;j++)
   scanf("%d", &a[i][j]);

  start = clock();
   dfs(1);
    end = clock();
    // start DFS at node 1
 printf("\n");
 for(i = 1;i <= n;i++)
 {
   if(reach[i]) // if i th node can be reached from node 1
    count++; // then increment number of nodes that can be reached by starting at node 1 through DFS
 }
 if(count == n) // if number of nodes that can be reached is equal to the total number of nodes in the graph
  printf("\n Graph is connected\n");
 else
  printf("\n Graph is not connected\n");
  for(i=0;i<n;i++)
     printf("%d\t",trav[i]);
      printf("\ntime required is %.8f\n",((double)(end-start)/CLOCKS_PER_SEC));
}
