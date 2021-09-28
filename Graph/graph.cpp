#include<stdio.h>
#include<iostream>
int count = 1;
using namespace std;
int x, y, nodes, edges;
int A[100][100];
bool visited[100];
#define q_size 10
int front = -1,rear=0;
void enqeue(int arr[], int value){
if(rear==q_size-1){
    printf("queue overflow\n");
}
else{
  if(front==-1)
  front =0;
  arr[rear]=value;
  rear++;
    
}


}
int deqeue(int arr[])
{
if(rear==0)
{
    printf("queue is empty\n");
    return -1;
} 
else {
  int vertex=arr[front];
  front++;
return vertex;

}
}
void dfs(int start){
  visited[start] = true;
    cout<<"visit "<<start<<endl;
  for(int i=0; i<nodes; i++)
  {
    if(!visited[i]&& A[start][i]==1){
       //visited[i] = true;
    // count++;
       dfs(i);
    }
    

  }
 // if(count<nodes)
 // dfs(count++);

}
//bfs implementation
void bfs(int queue[],int start){
  enqeue(queue,start);
   visited[start] = true;
   // cout<<"visit "<<start<<endl;
    cout <<front<<" " <<rear<<endl;
    while(front!=rear){
    
      int vertex=deqeue(queue);
       cout <<front<<" " <<rear;
       cout<<"visit "<<vertex<<endl;
  for(int i=0; i<nodes; i++)
  {
    if(!visited[i]&& A[vertex][i]==1){
      // visited[i] = true;
       enqeue(queue,i);
       

      // bfs(queue,i);
    }
    }
    

  }
}
int main()
{
  
    freopen("input.txt","r",stdin);
    cout<<"enter nodes and the edges:"<<endl;
        cin >> nodes>>edges; 
        int queue[nodes];
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
       if(A[3][4] == 1)
          cout << "There is an edge between 3 and 4"<< endl;
      else 
          cout << "There is no edge between 3 and 4" << endl;

      if(A[2][3] == 1)
          cout << "There is an edge between 2 and 3" << endl;
      else
          cout << "There is no edge between 2 and 3" << endl;
             for(int i = 0;i < nodes;++i) {
             for(int j = 0;j <nodes;++j)
        { 
          cout << A[i][j] <<" ";

       }cout << endl;
             }
      //find neighbour
       for(int i = 0;i < nodes;i++) {
         cout << "neighbour " << i <<": "<< endl;
             for(int j = 0;j <nodes;j++)
        { 
          if(A[i][j])
            cout << j <<" ";

       }cout << endl;
             }
   // dfs(4);

  bfs(queue,0);
      return 0;

    }

