#include <iostream>
using namespace std;
void printarr(int arr[],int n){
  cout<<"element of array is"<<" "<<n<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl; 
}

int binarysearch(int arr[], int s, int e, int key) {
    printarr(arr, e - s + 1);
    // base case
    if (s > e) {
        return -1; // not found
    }
    int mid = s + (e - s) / 2;

    if (arr[mid] == key) {
        return mid;
    } else if (arr[mid] > key) {
        return binarysearch(arr, s, mid - 1, key);
    } else {
        return binarysearch(arr, mid + 1, e, key);
    }
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter the elements in sorted order: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key to be searched: ";
    cin >> key;

    int ans = binarysearch(arr, 0, n - 1, key);

    if (ans != -1)
        cout << "Key is present at index " << ans << endl;
    else
        cout << "Key not found" << endl;

    return 0;
}
