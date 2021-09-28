#include<bits/stdc++.h>
using namespace std;
#define q_size 100
int front=0,rear=-1;
void enqeue(int arr[], int value){
if(rear==q_size){
    printf("queue overflow\n");
}
else{
    arr[++rear]=value;
}
}
int deqeue(int arr[])
{
if(front>rear)
{
    printf("queue is empty\n");
    return -1;
} 
else {
return arr[front++];

}
}
void display(int queue[]){
    printf("queue:");
    for(int i=front; i<=rear;++i)
     printf("%d ",queue[i]);
     printf("\n");
} 
int main()
{
    int arr[q_size];
printf("deqeue=%d\n",deqeue(arr));
   enqeue(arr,1);
   enqeue(arr,4);
   enqeue(arr,3);
   enqeue(arr,2);
   enqeue(arr,5);
    display(arr);
   enqeue(arr,56);
     display(arr);
    printf("deqeue=%d\n",deqeue(arr));
     printf("deqeue=%d\n",deqeue(arr));
      printf("deqeue=%d\n",deqeue(arr));
       printf("deqeue=%d\n",deqeue(arr));
        printf("deqeue=%d\n",deqeue(arr));
         printf("deqeue=%d\n",deqeue(arr));
          printf("deqeue=%d\n",deqeue(arr));
           printf("deqeue=%d\n",deqeue(arr));
    // for(int i=0;i<q_size;i++)
    // for(int i=0;i<q_size;i++)
    //      printf("%d ",arr[i]);


}