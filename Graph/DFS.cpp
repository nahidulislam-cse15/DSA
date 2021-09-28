#include<stdio.h>
#include<iostream>
int count = 1;
using namespace std;
int x, y, nodes, edges;
int A[100][100];
bool visited[100];
//dfs implementation using recursion
void dfs(int start){
  visited[start] = true;
    cout<<"visit "<<start<<endl;
  for(int i=0; i<nodes; i++)
  {
    if(!visited[i]&& A[start][i]==1){
       visited[i] = true;
       
       dfs(i);
       //printf("call =%d\n",i);
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
             for(int i = 0;i < nodes;++i) {
             for(int j = 0;j <nodes;++j)
        { 
          cout << A[i][j] <<" ";

       }cout << endl;
             }
     
 dfs(0);
  //for disconnected graph
    //   for(int vertex = 0; vertex < nodes; vertex++)
    //   {
    //         if(!visited[vertex])
    //         {
    //               dfs(vertex);
    //         }
    //   }
    //   printf("\n");
    //  
     return 0;

    }

