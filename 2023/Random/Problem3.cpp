#include <bits/stdc++.h>
using namespace std;

struct Node // a node of the binary search tree
{
    int data;                                               // data of the node
    Node *left, *right;                                     // left and right child of the node
    Node(int data) : data(data), left(NULL), right(NULL) {} // constructor
};

void insert(Node *&root, int data) // insert a node with the given data
{
    if (root == NULL) // if the tree is empty
    {
        root = new Node(data); // create a new node
        return;
    }
    if (data < root->data)        // if the data is less than the root data
        insert(root->left, data); // insert the data in the left subtree
    else
        insert(root->right, data); // insert the data in the right subtree
}

void prefix(Node *root) // preorder traversal
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    prefix(root->left);
    prefix(root->right);
}

void infix(Node *root) // inorder traversal
{
    if (root == NULL) // if the tree is empty
        return;
    infix(root->left);         // visit the left subtree
    cout << root->data << " "; // visit the root
    infix(root->right);        // visit the right subtree
}

void posfix(Node *root) // postorder traversal
{
    if (root == NULL) // if the tree is empty
        return;
    posfix(root->left);  // visit the left subtree
    posfix(root->right); // visit the right subtree
    cout << root->data << " ";
}

bool search(Node *root, int data) // search for the node with the given data
{
    if (root == NULL) // if the tree is empty
        return false;
    if (root->data == data) // if the data is found
        return true;
    if (data < root->data)               // if the data is less than the root data then it is in the left subtree
        return search(root->left, data); // search in the left subtree
    else
        return search(root->right, data); // search in the right subtree
}

Node *remove(Node *root, int data) // remove the node with the given data
{
    if (root == NULL)
        return root;

    if (data < root->data)                       // if the data is less than the root data then it is in the left subtree
        root->left = remove(root->left, data);   // remove the node from the left subtree
    else if (data > root->data)                  // if the data is greater than the root data then it is in the right subtree
        root->right = remove(root->right, data); // remove the node from the right subtree
    else
    {
        if (root->left == NULL) // if the node has no left child
        {
            Node *temp = root->right; // store the right child in a temporary node
            delete root;
            return temp;
        }
        else if (root->right == NULL) // if the node has no right child
        {
            Node *temp = root->left; // store the left child in a temporary node
            delete root;
            return temp;
        }
        Node *temp = root->left;                     // if the node has both the children
        while (temp->right != NULL)                  // find the inorder successor
            temp = temp->right;                      // which is the rightmost node in the left subtree
        root->data = temp->data;                     // copy the data of the inorder successor to the node
        root->left = remove(root->left, temp->data); // remove the inorder successor
    }
    return root;
}

int main()
{
    Node *root = NULL;
    string op;
    // string s1 = "PREFIXA", s2 = "INFIXA", s3 = "POSFIXA";
    int n;
    while (cin >> op) // op != EOF
    {
        if (op == "l") // l for load
        {
            cin >> n;
            insert(root, n); // insert n in the tree
        }
        else if (op == "P") // P for search
        {
            cin >> n;
            if (search(root, n)) // search for n in the tree
                cout << n << " existe" << endl;
            else
                cout << n << " nao existe" << endl;
        }
        else if (op == "R") // R for Remove
        {
            cin >> n;
            root = remove(root, n); // remove n from the tree
        }
        else
        {
            if (op == "I") // I for Insert
            {
                cin >> n;
                insert(root, n); // insert n in the tree
            }
            else if (op == "PREFIXA")
                prefix(root);
            else if (op == "INFIXA")
                infix(root);
            else if (op == "POSFIXA")
                posfix(root);
            cout << endl;
        }
    }
    return 0;
}
