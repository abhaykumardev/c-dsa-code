#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
  if(n==0 || n==1){
    return true;
  }
  if(arr[0]>arr[1]){
    return false;
  }
  bool smallprob=issorted(arr+1,n-1);
  return smallprob;
}



int main(){
  int n;
  cout<<"enter the size of array"<<endl;
  cin>>n;
  int arr[100];
  cout<<"enter the element at index "<<endl;
  for(int i=0;i<n;i++){
    
    cin>>arr[i];
  }
  bool ans=issorted(arr,n);
  if(ans){
    cout<<"array is sorted"<<endl;
  }
  else{
    cout<<"array is not sorted"<<endl;
  }



  
}