#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int data) {
        val = data;
        next = NULL;
    }
};

class Linkedlist {
public:
    Node* head;
    Linkedlist() {
        head = NULL;
    }

    ~Linkedlist() {
        while (head != NULL) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void insertAtTail(int value) {
        Node* new_node = new Node(value);
        if (head == NULL) {
            head = new_node;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void deleteduplicatenodes() {
        Node* curr_node = head;
        while (curr_node) {
            while (curr_node->next && curr_node->val == curr_node->next->val) {
                Node* temp = curr_node->next;
                curr_node->next = curr_node->next->next;
                delete temp;
            }
            curr_node = curr_node->next;
        }
    }
};

void reversePrint(Node* head){
    if(head == NULL){
        return;
    }
    reversePrint(head->next);
        cout<<head->val<<" ";
    
}Node* reversell(Node* head){
    Node* prevptr = NULL;
    Node* currptr = head;
    while(currptr!= NULL){
        Node* nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr= currptr;
        currptr= nextptr;

    }
    Node* new_head = prevptr;
    return new_head;
}
bool checkequal(Node* head1, Node* head2){
    Node* ptr1 = head1;
    Node* ptr2 = head2;

    while(ptr1!= NULL && ptr2!= NULL){
        if(ptr1->val!= ptr2->val){
            return false;
            }
            ptr1= ptr1->next;
            ptr2= ptr2->next;
    }
    return(ptr1 ==NULL & ptr2 ==NULL);
}



int main() {
    Linkedlist l2;

    l2.insertAtTail(1);
    l2.insertAtTail(2);
    l2.insertAtTail(2);
    l2.insertAtTail(2);
    l2.insertAtTail(3);
    l2.insertAtTail(3);
    l2.insertAtTail(3);
    l2.insertAtTail(4);
    l2.insertAtTail(5);
    l2.insertAtTail(5);

    Linkedlist l1;
    l1.insertAtTail(1);

    l1.insertAtTail(2);
    l1.insertAtTail(2);
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(3);
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    l1.insertAtTail(5);

    l1.deleteduplicatenodes();
    l2.deleteduplicatenodes();

    cout << checkequal(l1.head, l2.head) << endl;

    return 0;
}





