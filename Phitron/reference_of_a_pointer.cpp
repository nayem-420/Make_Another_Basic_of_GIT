#include <bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
    int y = 200;
    p = NULL;
    p = &y;
    cout << "In \"fun\" function:" << p << endl;
}
int main()
{
    int x = 10;
    int *p = &x;
    fun(p);
    cout << "In \"main\" function:" << p << endl;
    return 0;
}