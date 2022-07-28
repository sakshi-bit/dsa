#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;
    Node *prev;

    //constructor
    Node(int d){
        this->data = d;
        this->next=NULL;
        this->prev = NULL;
    }

    //destructure
    ~Node(){
        int val = this->data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }

        cout<<"memory free for node with data "<<val<<endl;
    }

};


//prints the linked list

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
        
    }
    cout<<endl;
}


void insertAtBegining(Node* &tail, Node* &head,int d){
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }else{
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head= temp;
    }
}

void insertAtTail(Node* &tail,Node* &head,int d){
    if(tail==NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }else{
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
}

void insertAtAnyPosition(Node* &tail, Node* &head, int position, int d){

    if(position==1){
        insertAtBegining(head,tail,d);
        return;
    }
    else{
        int cnt = 1;
        Node* temp = head;
        while(cnt<position-1){
            temp = temp->next;
            cnt++;
        }

        if(temp->next==NULL){
            insertAtTail(tail,head,d);
            return;
        }
        Node* nodeToBeInserted = new Node(d);
        nodeToBeInserted->next = temp->next;
        temp->next->prev = nodeToBeInserted;
        temp->next = nodeToBeInserted;
        nodeToBeInserted->prev = temp;
        
    }


}

void deleteNode(Node* &head,Node* &tail,int position){

    if(position==1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next =curr->next;
        curr->next = NULL;

        
    }
}

//get the length of the linked list

int getLength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
        
    }
    return len;
}

Node* reverseDll(Node* &head,Node* &tail){
    Node* curr = head;
    Node* nextNode = NULL;
    while(curr!=NULL){
        nextNode= curr->next;
        curr->next = curr->prev;
        curr->prev = nextNode;
        curr= nextNode;
    }

    curr=head;
    head = tail;
    tail = curr;
    return head;
}



int main(){


    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    //cout << getLength(head) << endl;

    insertAtBegining(tail,head, 11);
    // print(head);
    // cout << "head  " << head -> data << endl;
    // cout << "tail  " << tail -> data << endl;

    insertAtBegining(tail,head, 13);
    // print(head);
    // cout << "head  " << head -> data << endl;
    // cout << "tail  " << tail -> data << endl;

    insertAtBegining(tail,head, 8);
    // print(head);
    // cout << "head  " << head -> data << endl;
    // cout << "tail  " << tail -> data << endl;

    insertAtTail(tail,head, 25);
    // print(head);
    // cout << "head  " << head -> data << endl;
    // cout << "tail  " << tail -> data << endl;

    insertAtAnyPosition(tail, head, 2, 100);
    // print(head);
    // cout << "head  " << head -> data << endl;
    // cout << "tail  " << tail -> data << endl;

    insertAtAnyPosition(tail, head, 1, 101);
//     print(head);

//     cout << "head  " << head -> data << endl;
//     cout << "tail  " << tail -> data << endl;
//     cout<<endl;
//    cout<<"length"<<endl;

    // cout<<getLength(head);
    // insertAtAnyPosition(tail, head, 6, 102);
    print(head);
    // cout << "head  " << head -> data << endl;
    // cout << "tail  " << tail -> data << endl;
    //  cout<<"length"<<endl;
    //  cout<<getLength(head);
    //  deleteNode(head,tail,4);
    //  print(head);
    //  cout << "head  " << head -> data << endl;
    // cout << "tail  " << tail -> data << endl;
    //  cout<<"length"<<endl;


    reverseDll(head,tail);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    return 0;

}