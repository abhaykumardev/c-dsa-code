#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid;

    while (start <= end) {
        mid = start + (end - start) / 2; // Calculate mid index

        if (arr[mid] == key) {
            return mid; // Key found
        }
        if (key > arr[mid]) {
            start = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
    }
    return -1; // Key not found
}

int main() {
    int even[6] = {2, 4, 6, 8, 9, 22};
    int odd[3] = {5, 8, 9};

    int evenindex = binarysearch(even, 6, 22);
    cout << "Index of 22 is = " << evenindex << endl;

    int oddindex = binarysearch(odd, 3, 8);
    cout << "Index of 8 is = " << oddindex << endl;

    return 0; // Indicate successful completion
}