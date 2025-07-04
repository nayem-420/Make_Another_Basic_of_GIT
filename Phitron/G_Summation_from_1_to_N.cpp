#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void print_linked_list(Node* &head)
{
    Node* tmp = head;
    int cnt = 0; 
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    cout << cnt << endl;
}
int main()
{
    int val;
    Node* head = NULL;
    Node* tail = NULL;
    while(true)
    {
        if(val == -1)
        {
            cin >> val;
        }
    }
    print_linked_list(head);
    return 0;
}