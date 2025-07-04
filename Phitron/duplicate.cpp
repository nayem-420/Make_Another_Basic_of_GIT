#include <bits/stdc++.h>
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
int main()
{
    Node a(20), b(30), c(40 );
    a.value = 10;
    b.value = 20;
    c.value = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << a.value << endl;
    cout << a.next->next->value << endl;
    return 0;
}