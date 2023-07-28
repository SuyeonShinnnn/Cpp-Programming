#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    string text;
    int index = 0;
    int count = 0;

    cout << "문자열 입력 >> ";
    getline(cin, text);

    for(int i=0; i<text.length(); i++)
        text[i] = tolower(text[i]);

    while(text.find('a', index) <= text.length() - index)
        count ++;

    cout << "문자 a는 " << count << "개 있습니다." << endl;

    return 0;
}