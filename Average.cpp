#include <iostream>
using namespace std;

class Average
{
    int* arr;
public:
    Average()
    {
        arr = new int[5];
    }
    void input()
    {
        for(int i=0; i<5; i++)
            cin >> arr[i];
    }
    double average()
    {
        double sum = 0;
        for(int i=0; i<5; i++)
            sum += arr[i];
        return sum/5;
    }
    ~Average()
    {
        delete arr;
    }
};
int main()
{
    Average avg;

    cout << "정수 5개 입력 >> ";
    avg.input();
    cout << "평균 " << avg.average() << endl;
}