#include <bits/stdc++.h>
using namespace std;

void convertintoDLL(Node<int> *root, Node<int> *&head)
{
    // base Case
    if (root = NULL)
    {
        return NULL;
    }

    convertintoDLL(root->right, head)

        root->right = head;

    if (head != NULL)
        head->left = root;

    head = root;

    convertintoDLL(root->left, head)
};

Node<int> mergeLinkedlist(Node<int> *head1, Node<int> *head2)
{
    Node<int> *head = NULL;
    Node<int> *tail = NULL;

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data < head2->data)
        {
            if (head = NULL)
            {
                head = head1;
                tail = head1;
                head1 = head1->right;
            }
            else
            {
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
            }
        }
        else
        {
            if (head = NULL)
            {
                head = head2;
                tail = head2;
                head2 = head2->right;
            }
            else
            {
                tail->right = head2;
                head2->left = tail;
                tail = head2;
                head2 = head2->right;
            }
        }
    }

    while (head1 != NULL)
    {
        tail->right = head1;
        head1->left = tail;
        tail = head1;
        head1 = head1->right;
    }

    while (head2 != NULL)
    {
        tail->right = head2;
        head2->left = tail;
        tail = head2;
        head2 = head2->right;
    }
    return head;
}

int countNodes(Node<int> *head){
    int cnt=0;
    Node<int> *temp =head;
    while(temp != NULL){
        cnt++;
        temp =temp->right;

    }
    return cnt;
}

Node<int> *sortedLLToBST(Node<int>* &head , int n){

    // base Case
    if(n <=0 || root= NULL){
        return NULL 
    }

    Node<int>* left= sortedLLToBST(head ,n/2)
    Node<int>* root =head;
    root->left = left;
    head=head->next;

    root->right = sortedLLToBST(head, n-n/2 -1)
    return root;

}

int main()
{

    // Pseudo code

    // Lecture Number 72
}