#include<iostream>
#include<queue>
using namespace std;
class node{
  public:
  int data;
  node* left;
  node* right;

  node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
   
  }
};

node* buidtree( node * root){
  cout<<"enter the root"<<endl;
  int data;
  cin>>data;
  root = new node(data);

  if(data==-1){
    return NULL;
  }
  cout<<"enter data for inserting in left of " <<  data  <<endl;
  root->left=buidtree(root->left);
  cout<<"enter data for inserting in right of " <<  data  <<endl;
  root->right=buidtree(root->right);
  return root;

}


void levelordertraversal(node* root){
  if(root==NULL){
    return;
  }
  queue<node*>q;
  q.push(root);
  q.push(NULL);

  while(!q.empty()){
    node* temp =q.front();
    q.pop();

    if(temp==NULL){
      //old level is completely traverse

      cout<<endl;
      if(!q.empty()){
        q.push(NULL);
      }
    }
    else{
      cout<<temp->data<<" ";
      if(temp->left!=NULL){
        q.push(temp->left);
      }
      if(temp->right!=NULL){
        q.push(temp->right);
      }
    }
  }
  
}

//2nd method for level order traversal

void levelOrderWithoutNull(node* root) {
    if(!root) return;

    queue<node*> q;
    q.push(root);

    while(!q.empty()) {
        int levelSize = q.size();  // number of nodes at this level

        for(int i = 0; i < levelSize; i++) {
            node* current = q.front();
            q.pop();
            cout << current->data << " ";

            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
        }

        cout << endl; // end of level
    }
}

void inorder(node* root){

  if (root==NULL){
    return;
  }
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}

void preorder(node* root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);


}
void postorder(node* root){
  if(root==NULL){
    return;
  }
  
  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<" ";


}


int main(){
  //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
  node * root=NULL;
  root=buidtree(root);
  cout<<"printing level order traversal of tree"<<endl;
  levelordertraversal(root);
  cout<<"inorder treversal is ";
  inorder(root);
  cout<<endl;

  cout<<"preorder treversal is ";
  preorder(root);
  cout<<endl;

  cout<<"postorder treversal is ";
  postorder(root);



}