#include <iosteram>
using namespace std;

int binarysearch(int arr[],int size,int key){
int start=0;
int end=size-1;
int mid=start+(end-start)/2;
while (start<=end)
{
    if(arr[mid]==key){
        return mid;
    }
    if(key>arr[mid]){
        start=mid=1;

    }
    else{
    end=end-1;
    }
    mid=start+(end-start)/2;
}   
return -1;

}

int main(){
    int even[6]={2,4,6,8,9,22};
    int odd[3]={5,8,9};
    int evenindex=binarysearch(arr,6,22);
    cout<<"index of 22 is="<<evenindex<<endl;
    int oddindex=binarysearch(arr,5,8);
    cout<<"index of 8 is="<<oddindex<<endl;


}