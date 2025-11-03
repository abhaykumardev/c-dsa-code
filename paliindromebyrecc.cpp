#include<iostream>
#include<string>
using namespace std;
bool pali(string str, int s, int e) {
    // base case
    if (s >= e) {
        return true;
    }
    if (str[s] != str[e]) {
        return false;
    } else {
        return pali(str, s + 1, e - 1);
    }
}
int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    int n = str.length();
    bool ans = pali(str, 0, n - 1);
    if (ans) {
        cout << "String is palindrome" << endl;
    } else {
        cout << "String is not palindrome" << endl;
    }
    return 0;
}