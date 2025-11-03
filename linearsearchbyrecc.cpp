#include<iostream>
using namespace std;
void printarr(int arr[],int n){
  cout<<"element of array is"<<n<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
bool linearsearch(int arr[],int n,int key){
  printarr(arr,n);
  if(n==0){
    return false;
  }
 if(arr[0]==key){
   return true;
 }
 else{
   bool smallprob=linearsearch(arr+1,n-1,key);
  return smallprob;
 }
}
int main(){
  int n;
  cout<<"enter the size of array"<<endl;
  cin>>n;
  int arr[100];
  cout<<"enter the element of array "<<endl;
  for(int i=0;i<n;i++){
    
    cin>>arr[i];
  }
  int key;
  cout<<"enter the key to be searched"<<endl;
  cin>>key;
  bool ans=linearsearch(arr,n,key);
  
  if(ans){
    cout<<"key is present"<<endl;
  }
  else{
    cout<<"key is not present"<<endl;
  }
}

