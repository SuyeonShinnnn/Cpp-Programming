#include <iostream>
using namespace std;

class Stack
{
    int p[10];
    int tos;
public:
    Stack();
    bool push(int n);
    bool pop(int& n);
};
Stack::Stack()
{
    tos = 0;
}
bool Stack::push(int n)
{
    if(tos >= 10)
        return false;
    else
    {
        p[tos++] = n;
        return true;
    }
}
bool Stack::pop(int& n)
{
    if(tos <= 0)
        return false;
    else
    {
        n = p[--tos];
        return true;
    }
}
int main()
{
    Stack a;
    for(int i = 0; i < 11; i++)
    {
        if(a.push(i)) cout << i << ' ';
        else cout << endl << i+1 << " 번째 stack full" << endl;
    }
    int n;
    for(int i = 0; i < 11; i++)
    {
        if(a.pop(n)) cout << n << ' ';
        else cout << endl << i+1 << " 번째 stack empty" << endl;
    }
    cout << endl;
}