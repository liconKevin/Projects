#include <iostream>
#include <vector>
#include "Entities/player.cpp"

using namespace std;

int main() {

    vector<Player> players ;

    int condition = 0;

    do
    {
        system("cls");

        cout << "Enter a valid option to play" << endl;

        cout << "1: Create a new Player" << endl;

        cout << "9: Exist the program" << endl;

        cout << "Select an option: ";
        
        cin >> condition;

        cout << endl;

        switch (condition)
        {
            case 0:
                cout << "Helo new palyer " << endl;
            break;
        
            default:
                cout << "WTF ARE YOU DUM!!" << endl;
            break;
        }


    } while (condition != 9);

    return 0;

}