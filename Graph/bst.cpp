#include<iostream>
using namespace std;
struct Node{
    int  data;
    struct Node *left;
    struct Node * right;
};
struct Node *root;
void insert(int val){
    struct Node *newNode=new Node();
    newNode->data=val;
    newNode->left=NULL;
     newNode->right=NULL;
    if(root==NULL)
    root=newNode;
    else{
        struct Node *temp=root;
        while(1){
        if(newNode->data<=temp->data)
        {
            if(temp->left==NULL)
            {temp->left=newNode;
            break;}
            else
             temp=temp->left;
        }
        else
        {
            if(temp->right==NULL){
            temp->right=newNode;
            break;
            }
            else
             temp=temp->right;
        }
  //  cout<<temp->left->data<<endl;
 //     cout<<temp->right->data<<endl;
        }


    }
    
 

}
void preorder(struct Node *root)
{
  //plr
   if(root==NULL) return;
   cout<<root->data<<" ";
   preorder(root->left);
   preorder(root->right);

}
void inorder(struct Node *root){
  //lpr
   if(root==NULL) return;
  
   inorder(root->left);
    cout<<root->data<<" ";
   inorder(root->right);
}
void postorder(struct Node *root){
  //lrp
   if(root==NULL) return;
   postorder(root->left);
   postorder(root->right);
    cout<<root->data<<" ";
}
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
int main(){
    root=NULL;
    insert(5);
      insert(6);
        insert(4);
          insert(10);
            insert(8);
            /*
              5
            4   6 
                  10
                8  
            */
           cout<<"preorder:"<<endl;
            preorder(root);
            cout<<endl;
             cout<<"inorder:"<<endl;
            inorder(root);
            cout<<endl;
             cout<<"postorder:"<<endl;
            postorder(root);    

  
}