#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buidTree(node *root)
{
    cout << "enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "enter data for inserting in the left of " << data << endl;
    root->left = buidTree(root->left);
    cout << "enter data for inserting in the right of " << data << endl;
    root->right = buidTree(root->right);
    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();

        q.pop();

        if (temp == NULL)
        { // purana level complete ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL); // queue still have some child nodes
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
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void buildFromLevelOrder(node* &root){
    queue<node*>q;
    cout<<"Enter the root data "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"enter the left node of "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout<<"enter the right node of "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->right = new node(rightdata);
            q.push(temp->right);
        }

    }
}
int main()
{
    node *root = NULL;
    buildFromLevelOrder(root);
    cout<<endl;
    levelOrderTraversal(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    /*
    root = buidTree(root);
    levelOrderTraversal(root);
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);
    */
    return 0;
}