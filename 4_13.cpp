#include <iostream>
#include <string.h>
using namespace std;

class Histogram
{
    string histo;
public:
    Histogram(string histo)
    {
        (this -> histo).insert(0, histo);
    }
    void put(string text)
    {
        (this -> histo).insert(histo.length(), text);
    }
    void putc(char c)
    {
        string t = string(1, c);
        (this -> histo).insert(histo.length(), t);
    }
    void print()
    {
        cout << histo << endl;

        int count[26] = {0,};

        for(int i = 0; i < histo.length(); i++)
        {   //소문자 변환
            histo[i] = tolower(histo[i]);
        }
        
        int k = 0;
        for(char i = 'a'; i <= 'z'; i++)
        {
            for(int j = 0; j < histo.length(); j++)
            {
                if(i == histo[j])
                    count[k]++;
            }
            k++;
        }
        int sum = 0;
        for(int i = 0; i< 26; i++)
            sum += count[i];

        cout << "총 알파벳 수 " <<  sum << endl;
        cout << "\n\n";

        k = 0;
        for(char i = 'a'; i <= 'z'; i++)
        {
            cout << i << "  (" << count[k] << ")   : ";

            for(int j = 0; j < count[k]; j++)
                cout << "*";
            cout << endl;
            k++;
        }
    }
};
int main()
{
    Histogram elvisHisto("Wise men say, only fools rush in But I can't help");
    elvisHisto.put("falling in love with you");
    elvisHisto.putc('-');
    elvisHisto.put("Elvis Presley");
    elvisHisto.print();

    return 0;
}