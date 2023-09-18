#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this-> data =d;
        this->next = NULL;
        this->prev= NULL;
    }


};
void print(Node* head){
    Node * temp = head;
    while(temp!= NULL){
        cout<<temp->data;
        temp = temp->next;
    }
    cout<<endl;
}

int getlength(Node* head){
    int len =0;
    Node * temp = head;
    while(temp!= NULL){
        len++;
        temp = temp->next;
    }
    return len;
}


void insertathead(Node* &head, int d){
    Node*temp = new Node(d);
    temp ->next = head;
    temp ->next = temp;
    head = temp;
}

int main(){
    Node* node1 = new Node(10);
    Node*head = node1;
    print(head);
    cout<<getlength(head)<<endl;

    return 0;
}