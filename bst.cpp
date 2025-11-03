#include <iostream>
#include <queue>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        data = d;
        left = right = NULL;
    }
};

node* insertintobst(node* root, int d) {
    // base case
    if (root == NULL) {
        root = new node(d);
        return root;
    }

    if (d > root->data) {
        root->right = insertintobst(root->right, d);
    } else {
        root->left = insertintobst(root->left, d);
    }

    return root; // ✅ important!
}

void takeinput(node*& root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = insertintobst(root, data); // ✅ assign back to root
        cin >> data;
    }
}

void levelOrder(node* root) {
    if (root == nullptr) return;

    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* current = q.front();
        q.pop();

        cout << current->data << " ";

        if (current->left) 
          q.push(current->left);
        if (current->right) 
          q.push(current->right);
    }
}

int main() {
    node* root = NULL;
    cout << "Enter data to create BST (end with -1): " << endl;
    takeinput(root);

    cout << "Level Order Traversal: ";
    levelOrder(root);

    return 0;
}
