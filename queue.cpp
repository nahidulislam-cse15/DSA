#include<bits/stdc++.h>
using namespace std;
#define q_size 5
int head=-1,tail=0;
void enqeue(int arr[], int value){
if(tail>=q_size){
    printf("queue overflow\n");
}
else{
    arr[tail]=value;
    tail+=1;
}


}
int deqeue(int arr[])
{
if(!arr[head]||head >=q_size)
{
    printf("queue is empty\n");
    return -1;
} 
else {
head+=1;
return arr[head];

}
}
int main()
{
    int arr[q_size];

   enqeue(arr,1);
   enqeue(arr,4);
   enqeue(arr,3);
   enqeue(arr,2);
   enqeue(arr,5);
    for(int i=0;i<q_size;i++)
        printf("%d ",arr[i]);
   enqeue(arr,56);
    
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