#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelorderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp = NULL)
        {
            // Level Completed
            cout << endl;
            if (!q.empty())
            {
                // Queue still have some child
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
};

Node* insertintoBST(Node* root, int d)
{
    // base Case
    if(root==NULL){
        root= new Node(d);
        return root;
    }

    if(d > root->data) {
        // right mai insert Krna haii 
        root->right = insertintoBST(root->right ,d);
    }
    else{
        // left mai insert krna haii
        root->left = insertintoBST(root->left ,d);

    }
    return root;
}

void takeinput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        insertintoBST(root, data);
        cin >> data;
    }
}

int main()
{

    Node *root = NULL;
    cout << " Enter Data to Create BST" << endl;
    takeinput(root);

    cout<< " Printing the BST"<<endl;
    levelorderTraversal(root);

    return 0;
}