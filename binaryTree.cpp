#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buidTree(node* root){
cout<<"enter the data: "<<endl;
int data;
cin>>data;
root = new node(data);

if(data==-1){
    return NULL;
}

cout<<"enter data for inserting in the left of "<<data<<endl;
root->left = buidTree(root->left);
cout<<"enter data for inserting in the right of "<<data<<endl;
root->right = buidTree(root->right);
return root;
}
int main(){
node* root = NULL;
root = buidTree(root);
}