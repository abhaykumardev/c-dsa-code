#include<iostream>
#include<climits>
using namespace std;
int getmax(int num[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;

}

int getmin(int num[],int n){
    int min= INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;

}


int main(){
    int arr;
    cout<<"enter the size of array"<<endl;
    cin>>arr;
    int num[100];
    cout<<"enter the element of array"<<endl;
    for(int i=0;i<arr;i++){
        cin >> num[i];
    }
    cout<<"maximum is"<<getmax(num,arr)<<endl;
    cout<<"minimum is"<<getmin(num,arr)<<endl;


}