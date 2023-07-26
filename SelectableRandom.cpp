#include <iostream>
#include <stdlib.h>
#include <time.h>
#define RAND_MAX 32767
using namespace std;

class SelectableRandom
{
public:
    SelectableRandom()
    {
        srand(time(NULL));
    }
    int next(string odd_even)
    {
        int num = -1;

        if(odd_even.compare("짝수") == 0)
        {
            while(num%2 != 0)//num이 짝수가 될 때까지 반복
            {
                num = rand() % (RAND_MAX + 1);
            }
        }
        else
        {
            while(num%2 != 1)//num이 홀수가 될 때까지 반복
            {
                num = rand() % (RAND_MAX + 1);
            }
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
    SelectableRandom r;
    string oddOrEven;
    cin >> oddOrEven;

    cout << "-- 0에서 " << RAND_MAX << " 까지의 " << oddOrEven << " 랜덤 정수 10 개--" << endl;
    
    for(int i=0; i<10; i++)
    {
        int n = r.next(oddOrEven);
        cout << n << ' ';
    }

    cout << endl << endl << "-- 2에서 " << "10까지의 랜덤 정수 10 개 --" << endl;
    for(int i=0; i<10; i++)
    {
        int n = r.nextInRange(2, 9);
        cout << n << ' ';
    }
    cout << endl;

    return 0;
}