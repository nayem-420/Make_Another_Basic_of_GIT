#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};
void insert_at_tail(Node* &head, int val){
    Node* newnode = new Node(val);
    Node* tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void print_linked_list(Node* &head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
}
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b; 

    insert_at_tail(head, 40);
    print_linked_list(head);
    return 0;
}