#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    string text;
    int index = -1;
    int count = 0;

    cout << "문자열 입력 >> ";
    getline(cin, text);

    while (true)
    {
		index = text.find('a', index+1);
        
		if (index == -1)
            break;
		else count++;
	}
    cout << "문자 a는 " << count << "개 있습니다." << endl;

    return 0;
}