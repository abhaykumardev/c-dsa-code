#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;

    // constructor
    node(int value) {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

// Function to print linked list
void print(node* head) {
    if (head == NULL) {
        cout << "List is empty " << endl;
        return;
    }
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to create linked list from array
node* createListFromArray(int arr[], int n) {
    if (n == 0) return NULL;

    node* head = new node(arr[0]);  // first node
    node* temp = head;

    for (int i = 1; i < n; i++) {
        node* newNode = new node(arr[i]);
        temp->next = newNode;
        newNode->prev = temp;   // doubly linked list
        temp = newNode;
    }
    return head;
}
int getlenght(node* head) {
    int length = 0;
    node* temp = head;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Create linked list
    node* head = createListFromArray(arr, n);

    // Print linked list
    cout << "Linked list: ";
    print(head);
    cout << "Length of linked list: " << getlenght(head) << endl;

    return 0;
}
