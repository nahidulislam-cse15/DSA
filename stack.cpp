#include<bits/stdc++.h>
using namespace std;
#define size 5
int top=0;
void push(int arr[], int value){
if(top>=size){
    printf("stack overflow\n");
}
else{
    arr[top]=value;
    top+=1;
}


}
int pop(int arr[])
{
if(top==0)
{
    printf("stack is empty\n");
    return -1;
}
else{
top-=1;
return arr[top];
}
}
int main()
{
    int arr[size];

    push(arr,1);
    push(arr,4);
    push(arr,3);
    push(arr,2);
    push(arr,5);
    for(int i=0;i<top;i++)
        printf("%d ",arr[i]);
    push(arr,56);
    
    printf("pop=%d\n",pop(arr));
     printf("pop=%d\n",pop(arr));
      printf("pop=%d\n",pop(arr));
       printf("pop=%d\n",pop(arr));
        printf("pop=%d\n",pop(arr));
         printf("pop=%d\n",pop(arr));
          printf("pop=%d\n",pop(arr));
    for(int i=0;i<top;i++)
         printf("%d ",arr[i]);


}