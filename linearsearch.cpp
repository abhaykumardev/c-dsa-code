#include<iostream>
using namespace std;
int linearsearch(int arr[], int size,int target){
    
    for(int i=0;i<size;i++){
        if(arr[i]==target)
        return 1;

    }
    return -1;

}
int main(){
    int arr[10];
    int size=10;
    int target;
    cout<<"enter the element of array"<< endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter the searching element"<< endl;
    cin>>target;
    int res=linearsearch( arr,size,target);
    if(res==1){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}
   