#include<bits/stdc++.h>
using namespace std;
#define size 5
int top=-1;
void push(int arr[], int value){
if(top>=size-1){
    printf("stack overflow\n");
}
else{
    arr[++top]=value;
}


}
int pop(int arr[])
{
if(top<0)
{
    printf("stack is empty\n");
    return -1;
}
else{
return arr[top--];
}
}
void display(int stack[])
{
    printf("\nPrint the full stack from TOP to BOTTOM:\n");
    for(int i = top; i>=0; i--)
        printf("%d\n",stack[i]);
}
int main()
{
    int arr[size];

    push(arr,1);
    push(arr,4);
    push(arr,3);
    push(arr,2);
    push(arr,5);
    display(arr);
    push(arr,56);
    
    printf("pop=%d\n",pop(arr));
     printf("pop=%d\n",pop(arr));
      printf("pop=%d\n",pop(arr));
       printf("pop=%d\n",pop(arr));
       display(arr);
        printf("pop=%d\n",pop(arr));
         printf("pop=%d\n",pop(arr));
          printf("pop=%d\n",pop(arr));
    for(int i=0;i<top;i++)
         printf("%d ",arr[i]);


}