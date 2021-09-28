#include<stdio.h>
#include<iostream>
using namespace std;
int x, y, nodes, edges;
int A[100][100];
bool visited[100];
#define q_size 100
int front=0,rear=-1;
int queue[q_size];
//queue implementation 
void enqeue(int value){
if(rear==q_size){
    printf("queue overflow\n");
}
else{
    queue[++rear]=value;
}
}
int deqeue()
{
if(front>rear)
{
    printf("queue is empty\n");
    return -1;
} 
else {
return queue[front++];

}
}
void display(){
    printf("queue:");
    for(int i=front; i<=rear;++i)
     printf("%d ",queue[i]);
     printf("\n");
} 

//bfs implementation
void bfs(int start){
  enqeue(start);//push starting vertex
   display();

    while(front<=rear){//loop until queue is empty\n
    
      int vertex=deqeue();//pop from queue marked visited
      
       visited[vertex] = true;
      cout<<"visited "<<vertex<<endl;
      display();
        for(int i=0; i<nodes; i++)
  {
    if(!visited[i]&& A[vertex][i]==1){
      visited[i] = true;//push vertex to queue and marked visited
       enqeue(i);
       display();
    }

    }
    

  }
}
int main()
{
  
    freopen("input.txt","r",stdin);
    cout<<"enter nodes and the edges:"<<endl;
        cin >> nodes>>edges; 
    
      cout<<"connection:\n";
        for(int i = 0;i < edges;++i)
        {
            cin >> x >> y;
            A[x][y] = 1;     //Mark the edges from vertex x to vertex y
            A[y][x] = 1;  
       }
       /* graph
       5 6
0 1
0 2
1 2
1 4
1 3
2 4
 */
    
      for(int i = 0;i < nodes;++i) {
             for(int j = 0;j <nodes;++j)
        { 
          cout << A[i][j] <<" ";

       }cout << endl;
             }

  bfs(0);
  //for disconnected graph
    //   for(int vertex = 0; vertex < nodes; vertex++)
    //   {
    //         if(!visited[vertex])
    //         {
    //               bfs(vertex);
    //         }
    //   }
    //   printf("\n");
     
      return 0;

    }

