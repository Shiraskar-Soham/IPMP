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


int main(){
    Node* head=inputNode();
    printList(head);
    return 0;
}