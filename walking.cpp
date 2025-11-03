#include<iostream>
using namespace std;
void walking(int src,int dest){
  cout<<"walking from "<<src<<" to "<<dest<<endl;
  if(src==dest){
    cout<<"reached"<<endl;
    return ;
  }
  src++;
  walking(src,dest);
}
int main(){
  int src=1;
  int dest=10;
  walking(src,dest);
 
}