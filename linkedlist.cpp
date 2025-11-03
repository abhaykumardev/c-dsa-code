#include<iostream>
using namespace std;

class node{
  public:
  int data;
  node*  next;

  //constructor

  node(int value){
    data =value;
    next=NULL;
  }
  

};
void print(node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
};

void deleteAtPosition(node* &head, int pos) {
    if (head == NULL) return; // empty list

    // Case 1: delete head (position 0)
    if (pos == 0) {
        node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // Case 2: delete middle node
    node* curr = head;
    node* prev = NULL;
    int count = 0;

    while (curr != NULL && count < pos) {
        prev = curr;
        curr = curr->next;
        count++;
    }

    // If position is invalid
    if (curr == NULL) return;

    prev->next = curr->next;
    delete curr;
}
bool iscircular(node*head){
  if(head==NULL){
    return true;
  }
  node*temp=head->next;
  while(temp!=NULL&&temp!=head){
    temp=temp->next;
  }
    if(temp==head){
      return true;
    }
   
    return false;
  
}



int main(){
  node *head,*tail;
 tail= head=NULL;
  // head=new node(4);
  // cout<<head->data<<endl;
  // cout<<head->next<<endl; 
  // node*n2;
  // //n1= new node(10);
  // n2=new node(20);
  // //node*n2=new node(20);
  // //cout<<n1 -> data<<endl;
  // cout<<n2->data<<endl;
  // cout<<n2->next<<endl;
  int arr[]={1,2,3,4,5,6};
  for(int i=0;i<6;i++){
    if(head==NULL){
      head=new node(arr[i]);
      tail=head;
    }
    else{
      tail->next=new node(arr[i]);
      tail=tail->next;

    }
  }
  //print the linked list
node*temp=head;
//   while(!temp){
//     cout<<temp->data<<" ";
//     temp=temp->next;
//   }
//   cout<<endl;

print(head);
  // deleteAtPosition(head,3);
  //  temp=head;
  // while(temp){
  //   cout<<temp->data<<" ";
  //   temp=temp->next;
  // }
  // cout<<endl;

 if (iscircular(head)){
    cout<<"linked list is circular"<<endl;
  }
  else{
    cout<<"linked list is not circular"<<endl;
  }
  //delete first node
  // if(head!=NULL){
  //   node*temp=head;
  //   head=head->next;
  //   delete temp;
  // }
  //  cout << "After deleting first node: ";
  //   temp = head;
  //   while (temp) {
  //       cout << temp->data << " ";
  //       temp = temp->next;
  //   }
  //   cout << endl;

  


  //delete last node

//   if(head!=NULL){
//     //only one node exist
//     if(head->next==NULL){
//       node*temp=head;
//       delete temp;
//       head=NULL;
//     }
//     //more than one node

//     else
//     {
//       node*curr=head;
//       node*prev=NULL;

//       //curr next is not null
//       while(curr->next!=NULL){
//         prev=curr;
//         curr=curr->next;

//       }
//       prev->next=curr->next;
//       delete curr;
//     }


//   }
//    //print the linked list after delete last node
//  temp=head;
//  cout<<"after deleting last node"<<endl;
//   while(temp){
//     cout<<temp->data<<" ";
//     temp=temp->next;
//   }
//   cout<<endl;

//delete any middle node


  


}