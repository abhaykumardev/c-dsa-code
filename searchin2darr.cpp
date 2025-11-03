#include<iostream>
using namespace std;
  
//search element
bool ispresent(int arr[][3],int key,int i,int j){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(arr[i][j]==key){
        return 1;
      }
      
    }
  }
  
}
//print sum of row
void printrowsum(int arr[][3],int i,int j){
  cout<<"sum of row "<<endl;
  int sum=0;
  for(int i=0;i<3;i++){
    int sum=0;
    for (int j=0;j<3;j++){
      sum=sum+arr[i][j];

    } cout<<sum<<" ";
  }
  cout<<endl;
}
//print sum of column

void printcolsum(int arr[][3],int i,int j){
  cout<<"sum of row "<<endl;
  int sum=0;
  for(int j=0;j<3;j++){
    int sum=0;
    for (int i=0;i<3;i++){
      sum=sum+arr[i][j];

    } cout<<sum<<" ";
  }
  cout<<endl;
}


int main(){
  
  int arr[3][3];
  cout<<"enter the element of arr"<<endl;
  for(int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      cin>>arr[i][j];
    }
  }
  for(int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      cout<<arr[i][j]<<" ";
    }cout<<endl;
  }
  

  cout<<"enter the key element"<<endl;
  int key;
  cin>>key;
  if(ispresent(arr,key,3,3)){
    cout<<"element found"<<endl;
  }
  else{
    cout<<"not found"<<endl;

  }
  printrowsum(arr,3,3);
  printcolsum(arr,3,3);
  
}