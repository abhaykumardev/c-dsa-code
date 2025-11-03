#include<iostream>
using namespace std;
int getsum(int arr[],int n){
  if(n==0){
    return 0;
  }
  if(n==1){
    return arr[0];
  }
  
  int smallprob=getsum(arr+1,n-1);
  int bigprob=arr[0]+smallprob;
  return bigprob;
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
  int ans=getsum(arr,n);
  cout<<"the sum of array is "<<ans<<endl;
}