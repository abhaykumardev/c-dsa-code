#include<iostream>
using namespace std;

void reversestring(string &str, int i, int j) {
    // base case
    if (i > j) {
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;
    reversestring(str, i , j );
    cout << str << endl; // print the string at each step
}

int main(){
    string str;
    cout << "Enter the string: ";
    cin >> str;
    int n = str.length();
    reversestring(str, 0, n - 1);
    return 0;
}
