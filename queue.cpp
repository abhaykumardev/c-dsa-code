#include<iostream>
#include<queue>
using namespace std;
int main(){
// using stl
queue<int>q;
q.push(11);
q.push(22);
q.push(23);
q.push(12);
cout<<"size is " <<q.size()<<endl;
cout<<"front is " <<q.front()<<endl;
q.pop();
q.pop();
cout<<"size is " <<q.size()<<endl;
q.pop();
q.pop();
if(q.empty()){

  cout<<"queue is empty " <<endl;
}
else{
  cout<<"queue is not empty " <<endl;
}

  
}