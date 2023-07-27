#include <iostream>
#include <stdlib.h>
#include <time.h>
#define RAND_MAX 32767
using namespace std;

class EvenRandom
{
public:
    EvenRandom()
    {
        srand(time(NULL));
    }
    int next()
    {
        int num = -1;

        while(num%2 != 0)//num이 짝수가 될 때까지 반복
        {
            num = rand() % (RAND_MAX + 1);
        }
        return num;
    }
    int nextInRange(int start, int end)
    {
        return rand() % (end - start + 1) + start;
    }
};
int main()
{
    EvenRandom r;
    cout << "-- 0에서 " << RAND_MAX << " 까지의 짝수 랜덤 정수 10 개--" << endl;
    for(int i=0; i<10; i++)
    {
        int n = r.next();
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2에서 " << "10까지의 랜덤 정수 10 개 --" << endl;
    for(int i=0; i<10; i++)
    {
        int n = r.nextInRange(2, 10);
        cout << n << ' ';
    }
    cout << endl;

    return 0;
}