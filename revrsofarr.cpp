#include<iostream>
using namespace std;
void revofarr(int arr[],int sz){
    int start=0;
    int end=sz-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
     
}
int main(){
    
    int arr[5];
    int size=5;
    cout<<"enter the elemnt of array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    revofarr(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}