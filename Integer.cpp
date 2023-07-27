#include <iostream>
#include <string>
using namespace std;

class Integer
{
    int number;
public:
    Integer(int number)
    {
        this -> number = number;
    }
    Integer(string number)
    {
        this -> number = stoi(number);
    }
    void set(int number)
    {
        this -> number = number;
    }
    int get()
    {
        return this -> number;
    }
    bool isEven()
    {
        if(this -> number % 2 == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    Integer n(30);
    cout << n.get() << ' ';
    n.set(50);
    cout << n.get() << ' ';

    Integer m("300");
    cout << m.get() << ' ';
    cout << m.isEven();
}