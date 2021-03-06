#include<stdio.h>
#include<conio.h>
#define INFINITY 9999
 
void dijkstra(int G[10][10],int n,int sourcenode);
 
int main()
{
	int G[10][10],i,j,n,u;
	printf("Enter no. of vertices:");
	scanf("%d",&n);
	printf("\nEnter the adjacency matrix:\n");
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&G[i][j]);
	
	printf("\nEnter the Source node:");
	scanf("%d",&u);
	dijkstra(G,n,u);
	
	return 0;
}
 
void dijkstra(int G[10][10],int n,int sourcenode)
{
 
	int cost[10][10],distance[10],pred[10];
	int visited[10],count,mindistance,nextnode,i,j;
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(G[i][j]==0)
				cost[i][j]=INFINITY;
			else
				cost[i][j]=G[i][j];
	

	for(i=0;i<n;i++)
	{
		distance[i]=cost[sourcenode][i];
		pred[i]=sourcenode;
		visited[i]=0;
	}
	
	distance[sourcenode]=0;
	visited[sourcenode]=1;
	count=1;
	
	while(count<n-1)
	{
		mindistance=INFINITY;
		
		for(i=0;i<n;i++)
			if(distance[i]<mindistance&&!visited[i])
			{
				mindistance=distance[i];
				nextnode=i;
			}
						
			visited[nextnode]=1;
			for(i=0;i<n;i++)
				if(!visited[i])
					if(mindistance+cost[nextnode][i]<distance[i])
					{
						distance[i]=mindistance+cost[nextnode][i];
						pred[i]=nextnode;
					}
		count++;
	}
 
	for(i=0;i<n;i++)
		if(i!=sourcenode)
		{
			printf("\nDistance of node %d = %d",i,distance[i]);
			printf("\n\nPath = %d",i);
			
			j=i;
			do
			{
				j=pred[j];
				printf(" <- %d",j);
			}while(j!=sourcenode);
	}
}