#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insertAtEnd(Node* &head, int val){
    Node* node = new Node(val);
    if(head == NULL){
        head = node;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = node;
    node->prev = temp;

}

void insertAtStart(Node* &head, int val){
    Node* node = new Node(val);
    if (head == NULL){
        head = node;
        return;
    }
    node->next = head;
    head->prev = node;
    head = node;
}

void insertAtNth(Node* &head, int val, int n){
    Node* node = new Node(val);
    if (n == 0){
        node->next = head;
        if (head!=NULL) head->prev = node;
        head = node;
        return;
    }
    Node* temp = head;
    for(int i = 0;i<n-1; i++){
        if (temp == NULL){
            delete node;
            return;
        }
        temp = temp->next;
    }
    node->next = temp->next;
    if (temp->next != NULL) temp->next->prev = node;
    temp->next = node;
    node->prev = temp;

}

void printLL(Node* head){
    if (head == NULL){
        cout<<"Empty Linked List.";
        return;
    }
    Node* temp = head;
    while (temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main() {
    
    return 0;
}