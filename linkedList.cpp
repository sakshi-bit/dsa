#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{

public:
int data;
Node *nextNode;

//constructor
Node(int data){
    this->data = data;
    this->nextNode = NULL;
}

//destructor
~Node(){
    int value = this->data;
    if(this->nextNode!=NULL){
        delete nextNode;
        nextNode = NULL;
        //
    }
    cout<<"memory is deallocated for the data"<<" "<<value<<endl;
}
};

void insertAtBegining(Node * &head,int d){

    //new node
    Node *temp = new Node(d);
    temp->nextNode = head;
    head = temp;

}


void insertAtTail(Node* &tail , int d){
    //create new node
    Node *temp = new Node(d);
    tail->nextNode = temp;
    tail = tail->nextNode;
}


void insertAtPos(Node* &head, Node* &tail, int pos, int d){

    if(pos==1){
        insertAtBegining(head,d);
        return;
    }

    Node *temp = head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->nextNode;
        cnt++;
    }

    if(temp->nextNode==NULL){
        insertAtTail(tail,d);
        return;
    }
    //new node
    Node *nodeToBeInserted = new Node(d);
    nodeToBeInserted->nextNode = temp->nextNode;
    temp->nextNode = nodeToBeInserted;

    

    
}

void deleteNode(Node* &head,Node* &tail, int position){

    //deleting first node
    
    int cnt = 1;
    if(position==1){
        Node *temp = head;
        head = temp->nextNode;
        //memory free start node
        temp->nextNode = NULL;
        delete temp;

    }else{

        //delete at any middle position or last node
        Node* prev = NULL;
        Node* curr = head;
        int cnt=1;
        while(cnt<position){
            prev = curr;
            curr = curr->nextNode;
            cnt++;
        }

        if(curr->nextNode==NULL){
            prev->nextNode = curr->nextNode;
            tail=prev;
        }
        else{

        prev->nextNode = curr->nextNode;
        }
        curr->nextNode=NULL;
        delete curr;

    }
}

void print(Node* &head){

    //Node create to point towards start of ll
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->nextNode;
    }
    cout<<endl;
}


bool isCircular(Node* &head){
    if(head==NULL){
            return true;
    }

    Node* temp = head;
    while(temp!=NULL && temp!=head){
        temp = temp->nextNode;
    }
    if(temp==NULL){
        return false;
    }

    return true;

}


int main(){

    Node *node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->nextNode<<endl;
    Node *head = node1;
    Node *tail = node1;
    print(head);

    // insertAtBegining(head,12);
    insertAtTail(tail,12);
    print(head);

    // insertAtBegining(head,15);
    insertAtTail(tail, 15);
    print(head);

    insertAtPos(head,tail,4,144);
    print(head);

    deleteNode(head,tail,4);
    print(head);

    cout<<"head"<<" "<<head->data<<endl;
    cout<<"tail"<<" "<<tail->data<<endl;

    
    if(isCircular(head)){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }

    return 0;
}