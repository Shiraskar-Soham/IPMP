#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        next = NULL;
    }
};

Node* inputNode(){
    int data;
    cin>>data;
    Node* head = NULL;
    Node* tail = NULL;
    while(data!=-1){
        Node *Newnode= new Node(data);
        if(head==NULL){
            head=Newnode;
            tail=Newnode;
        }
        else{
            tail->next= Newnode;
            tail= tail->next;
        }
        cin>>data;
    }
    return head;
}
void printList( Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* inputAtBegin(Node* head){
        cout<<endl<<"enter the first data";    
        int data;
        cin>>data;
        Node* Newnode= new Node(data);

        if(head==NULL){
            head=Newnode;
        }
        else{
            Newnode->next=head;
            head=Newnode;
        }
    return head;
}

Node* inputAtEnd(Node*head){
    cout<<endl<<"enter the last node";
    int data;
    cin>>data;
    Node* Newnode = new Node(data);
    Node* temp = head;
    if(head==NULL)head=Newnode;
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
    temp->next=Newnode;
    }

return head;
}
Node* inputAfterValue(Node*head){
    cout<<endl<<"enter the index after which the node is to be input";
    int index;
    cin>>index;
    int data;
    cin>>data;
    Node*Newnode = new Node(data);
    int c = 0;
    Node* temp = head;
    while(c<index){
        if(temp->next=NULL){
            cout<<"enter valid index";
            return head;
        }
        temp = temp->next;
        c++;
    }
    Newnode->next=temp->next;
    temp->next = Newnode;
    return head;
}

int main(){
    Node* head=inputNode();
    printList(head);
    // head = inputAtBegin(head);
    // printList(head);
    // head = inputAtEnd(head);
    // printList(head);
    head = inputAfterValue(head);
    printList(head);
    return 0;
}