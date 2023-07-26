#include <iostream>
#include <stdlib.h>
#include <time.h>
#define RAND_MAX 32767
using namespace std;

class Random
{
public:
    Random()
    {
        srand(time(NULL));
    }
    int next()
    {
        return rand() % RAND_MAX + 1;
    }
    int nextInRange(int start, int end)
    {
        return rand() % (end - start + 1) + start;
    }
};
int main()
{
    Random r;
    cout << "-- 0에서 " << RAND_MAX << " 까지의 랜덤 정수 10 개--" << endl;
    for(int i=0; i<10; i++)
    {
        int n = r.next();
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2에서 " << "4까지의 랜덤 정수 10 개 --" << endl;
    for(int i=0; i<10; i++)
    {
        int n = r.nextInRange(2, 6);
        cout << n << ' ';
    }
    cout << endl;

    return 0;
}