#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtEnd(Node* &head, int val){
    Node* node = new Node(val);
    if(head == NULL){
        head = node;
        head->next = head;
        return;
    }
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = node;
    node->next = head;

}
void insertAtStart(Node* &head, int val){
    Node* node = new Node(val);
    if(head == NULL){
        head = node;
        head->next = head;
        return;
    }
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = node;
    node->next = head;
    head = node;

}
void insertAtNth(Node* &head, int val, int n){
    Node* node = new Node(val);
    if (n == 0){
        node->next = head;
        head = node;
        node->next = head;
        return;
    }
    Node* temp = head;
    for(int i = 1;i<n-1; i++){
        if (temp == head){
            delete node;
            return;
        }
        temp = temp->next;
    }
    node->next = temp->next;
    temp->next = node;

}

void deleteLL(Node* &head, int n){

    if (head == NULL){
        cout<<"Empty Linked List.";
    }

    if (n == 1){
        Node* temp = head;
        while (temp->next!= head){
            temp = temp -> next;
        }
        temp->next = head->next;
        Node* todel = head;
        head = head->next;
        delete todel;
        return;
    }

    Node* temp = head;

    for (int i = 1; temp!= head && i<n-1; i++){  
        temp = temp->next;      
    }

    if (temp == head || temp->next == head){
        cout<<"Index out of Linked list bound.";
        return;
    }
    
    Node* toDel = temp->next;
    temp->next = temp->next->next;
    delete toDel;
}

void printLL(Node* head){
    if (head == NULL){
        cout<<"Empty Linked List.";
        return;
    }
    Node* temp = head;
    while (temp->next != head){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<temp->data;
}

int main() {
    Node* head = NULL;
    int val;
    for (int i=0;i<5;i++){
        cin>>val;
        insertAtEnd(head, val);
    }
    printLL(head);
    return 0;
}