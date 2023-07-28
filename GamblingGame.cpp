#include <iostream>
using namespace std;

class GamblingGame
{
    int number[3];
public:
    GamblingGame()
    {
        
    }
    void randNumber()
    {
        srand(time(NULL));
        for(int i=0; i<3; i++)
            number[i] = rand()%3;
    }
    void showNumber()
    {
        cout << "       ";
        for(int i=0; i<3; i++)
            cout << number[i] << "       ";
        cout << endl;
        cout << endl;
    }
    bool winOrLose()
    {
        if(number[0] == number[1] && number[1] == number[2])
            return true;
        else 
            return false;
    }
};
class Player
{
    string name;
public:
    Player() { }
    void setPlayerName(string name)
    {
        (this -> name).insert(0, name);
    }
    string returnName()
    {
        return name;
    }
};
int main()
{
    cout << "***** 갬블링 게임을 시작합니다. *****" << endl;

    GamblingGame game;
    Player* player = new Player[2];
    string name;

    cout << "첫 번째 선수 이름 >> ";
    cin >> name;
    player[0].setPlayerName(name);

    cout << "두 번째 선수 이름 >> ";
    cin >> name;
    player[1].setPlayerName(name);
    
    cout << endl;

    int i = 0;
    while(1)
    {
        cout << player[i%2].returnName() <<": <Enter>";

        getchar();
        
        game.randNumber();
        game.showNumber();
        
        if(game.winOrLose() == true)
        {
            cout << player[i%2].returnName() <<"님 승리!!" << endl;
            break;
        }
        else
            cout << "아쉽군요!\n\n" << endl;
        i++;
    }

    return 0;
}