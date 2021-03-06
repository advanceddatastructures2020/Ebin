#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 5
struct Vertex
{
char label;
bool visited;
};
int queue[MAX];
int rear=-1;
int front=0;
int queueItemCount=0;
struct Vertex* lstVertices[MAX];
int adjMatrix[MAX][MAX];
int vertexcount=0;
void insert(int data)
{
queue[++rear]=data;
queueItemsCount++;
}
int removeData()
{
queueItemCount--;
return queue[front++];
}
bool is QueueEmpty()
{
return queueItemCount==0;
}
void addVertex(char label)
{
struct Vertex* vertex=(struct vertex*)malloc(sizeof(struct Vertex));
vertex->label=label;
vertex->visited=false;
lstvertices[vertex Count++]=vertex;
}
void addedge(int start,int end)
{
adjMatrix[start][end]=1;
adjMatrix[end][start]=1;
}
void displayvertex(int vertexIndex)
{
printf("%c",lstvertices[vertexIndex]->label);
}
int getAdjUnvisitedvertex(int vertexIndex)
{
int i;
for(i=0;i<vertexCount;i++)
{
if(adjMatrix[vertexIndex][i]==1&&lstVertices[i]->visited==false)
return i;
}
return -1;
}
void breadthfirstsearch()
{
int i;
lstvertices[0]->visited=true;
displayvertex(0);
insert(0);
int unvisitedVertex;
while(!isqueueempty())
{
int tempvertex=removedata();
while(unvisitedVertex=getAdjunvisitedVertex(tempVertex))!=-1)
{
lstVertices[unvisitedVertex]->visited=true;
displayVertex(unvisitedvertex);
insert(unvisitedVertex);
}
}
for(i=0;i<vertexCount;i++)
{
istvertices[i]->visited=false;
}
}
int main()
{
int i,j;
for(i=0;i<MAX;i++)
{
for(j=0;j<MAX;j++)
adjMatrix[i][j]=0;
}
addvertex('S');
addvertex('A');
addvertex('B');
addvertex('C');
addvertex('D');
addedge(0,1);
addedge(0,2);
addedge(0,3);
addedge(1,4);
addedge(2,4);
addedge(3,4);
printf("\nBreadth First Search:");
breadthfirstsearch();
return 0;



