#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory deallocated from "<<data<<endl;
    }
};

void insertNode(Node* &tail, int element, int d){

    //empty list
    if(tail == NULL){
        Node* temp = new Node(d);
        tail=temp;
        temp->next = temp;
    }
    else{
        //non empty list
        //assuming that the element is present in the list
        Node* curr = tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        
        //element is found curr-> is representing curr node
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* &tail,int element){

    //empty list
    if(tail==NULL){
        cout<<"list is empty :("<<endl;
        return;
    }else{
        //assuming element is present in list
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != element){
            prev = curr;
            curr=curr->next;
        }

        prev->next = curr->next;

        //when 1 node is there
        if(curr==prev){
            tail=NULL;
        }
        //more than 2 nodes
        else if(tail==curr){
            tail=prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node* &tail){
    Node* temp = tail;

    if(tail==NULL){
        cout<<"list is empty"<<endl;
    }

    do{
        cout<<tail->data<<" ";
        tail=tail->next;

    }while(tail!=temp);
    cout<<endl;
}

bool isCircular(Node* &head){
    if(head==NULL){
            return true;
    }

    Node* temp = head;
    while(temp!=NULL && temp!=head){
        temp = temp->next;
    }
    if(temp==NULL){
        return false;
    }

    return true;

}

int main(){
    Node* tail = NULL;
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);

    insertNode(tail,5,6);
    print(tail);

    insertNode(tail,9,10);
    print(tail);

    insertNode(tail,3,4);
    print(tail);

    deleteNode(tail,6);
    print(tail);

    if(isCircular(tail)){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }

    return 0;

}