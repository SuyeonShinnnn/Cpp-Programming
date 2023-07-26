#include <iostream>
using namespace std;

class Account 
{
    string name;
    int id, balance;

public:
    Account(string name, int id, int balance)
    {
        this -> name = name;
        this -> id = id;
        this -> balance = balance;
    }
    void deposit(int saving)
    {
        this -> balance += saving;
    }
    string getOwner()
    {
        return name;
    }
    int inquiry()
    {
        return this -> balance;
    }
    int withdraw(int w)
    {
        return this -> balance -= w;
    }
};
int main()
{
    Account a("kitae", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;

    return 0;
}