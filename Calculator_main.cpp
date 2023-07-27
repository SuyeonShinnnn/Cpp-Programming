#include <iostream>
#include "Calculator.cpp"
using namespace std;

int main()
{
    Add a;
    Sub s;
    Mul m;
    Div d;

    while(1)
    {
        int x, y;
        char op;

        cout << "두 정수와 연산자를 입력하세요 >> ";
        cin >> x >> y >> op;

        if(op == '+')
        {
            a.setValue(x, y);
            cout << a.calculate() << endl;
        }
        else if(op == '-')
        {
            s.setValue(x, y);
            cout << s.calculate() << endl;
        }
        else if(op == '*')
        {
            m.setValue(x, y);
            cout << m.calculate() << endl;
        }
        else if(op == '/')
        {
            d.setValue(x, y);
            cout << d.calculate() << endl;
        }
    }
    return 0;
}