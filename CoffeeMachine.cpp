#include <iostream>
using namespace std;

class CoffeeMachine
{
    int coffee, water, sugar;
public:
    CoffeeMachine(int coffee, int water, int sugar)
    {
        this -> coffee = coffee;
        this -> water = water;
        this -> sugar = sugar;
    }
    void drinkEspresso()
    {
        this -> coffee--;
        this -> water--;
    }
    void drinkAmericano()
    {
        this -> coffee--;
        this -> water -= 2;
    }
    void drinkSugarCoffee()
    {
        this -> coffee--;
        this -> water -= 2;
        this -> sugar--;
    }
    void fill()
    {
        this -> coffee = 10;
        this -> water = 10;
        this -> sugar = 10;
    }
    void show()
    {
        cout << "커피 머신 상태, 커피:" << this -> coffee << " 물:" << this -> water << " 설탕:" << this -> sugar << endl;
    }
};
int main()
{
    CoffeeMachine java(5, 10, 3);
    java.drinkEspresso();
    java.show();
    java.drinkAmericano();
    java.show();
    java.drinkSugarCoffee();
    java.show();
    java.fill();
    java.show();

    return 0;
}