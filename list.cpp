#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }

};

void insertAtHead(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;

}
void insertAtTail(Node* &head, int val){
    Node*new_node = new Node(val);
    Node*temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

void display(Node* head){
    Node*temp = head;
    while(temp!= NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"null"<<endl;
}

void insertAtpos(Node* &head, int val, int pos){
    if(pos==0){
        insertAtHead(head, val);
        return;
    }
    Node* new_node = new Node(val);
    Node* temp = head;
    int current_pos =0;
    while(current_pos!= pos-1){
        temp = temp->next;
        current_pos++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void updateAtpos(Node* &head, int k, int val){
    Node* temp = head;
    int curr_pos =0;

    while(curr_pos!=k){
        temp = temp->next;
        curr_pos++;
    }
    temp->val = val;
}
void deleteathead(Node* &head){
    Node* temp =  head;
    head = head->next;
    free(temp);
}

void deleteattail(Node* &head){
    Node* second_last = head;
    while(second_last->next->next!=NULL){
        second_last= second_last->next;
    }

    Node*temp = second_last->next;
    second_last->next = NULL;
    free(temp);
}
void deleteatpos(Node* &head, int pos){
    if(pos==0){
        deleteathead(head);
        return;
    }
    int curr_pos = 0; 
    Node* prev = head;
    while(curr_pos!= pos -1){
        prev = prev->next;
        curr_pos++;
    }
    Node* temp = prev->next;
    prev->next = prev->next->next;
}



int main(){
    Node* head = NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);
    insertAtTail(head,3);
    display(head);
    insertAtpos(head, 5,1);
    display(head);
    updateAtpos(head, 2,7);
    display(head);
   // deleteathead(head);
    display(head);
   // deleteattail(head);
    
    deleteatpos(head,2);
    display(head);
}
