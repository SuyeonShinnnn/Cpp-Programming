#include <iostream>
using namespace std;

class Oval
{
private:
    int height, width;
public:
    Oval();
    Oval(int width, int height);
    ~Oval();
    int getWidth();
    int getHeight();
    void set(int w, int h);
    void show();
};
Oval::Oval(){ this -> width = this -> height = 1; }
Oval::Oval(int width, int height){ this -> height = height; this -> width = width; }
Oval::~Oval() { cout << "Oval 소멸 : width = " << this -> width << ", height = " << this -> height << endl;}
int Oval::getWidth(){ return this -> width; }
int Oval::getHeight(){ return this -> height; }
void Oval::set(int w, int h) { this -> height = h; this -> width = w;}
void Oval::show(){ cout << "width = " << this -> width << ", height = " << this -> height << endl;}

int main()
{
    Oval a, b(3, 4);
    a.set(10, 20);
    a.show();
    cout << b.getWidth() << ", " << b.getHeight() << endl;

    return 0;
}