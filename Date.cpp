#include <iostream>
#include <string>
using namespace std;

class Date
{
    int year, month, day;
public:
    Date(int year, int month, int day)
    {
        this -> year = year;
        this -> month = month;
        this -> day = day;
    }
    Date(string date)
    {
        this -> year = stoi(date);

        int index = date.find('/');
        this -> month = stoi(date.substr(index+1));

	    index = date.find('/', index + 1); //index+1부터 '/' 검색
	    this->day = stoi(date.substr(index + 1)); // date의 인덱스 index+1에서부터 문자열 리턴
    }
    void show()
    {
        cout << this->year << "년" << this->month << "월" << this->day << "일" << endl;
    }
    int getYear()
    {
        return year;
    }
    int getMonth()
    {
        return month;
    }
    int getDay()
    {
        return day;
    }
};
int main()
{
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

    return 0;
}