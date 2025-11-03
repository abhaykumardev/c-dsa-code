#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    cout<<endl;
    
for(int i=0; i<=size;i++){
    cout<< arr[i]<<" ";
}
cout<<endl;
}

int main(){

int arr[10]={1,2,3,4,5};
int n=10;
 printarray(arr,10);
cout<<arr[3];    


int arr1[15]={5,6,3,4,5,};
  
   n=15;
 printarray(arr1,15);




}