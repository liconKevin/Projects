#include <iostream>
#include "Entities/player.cpp"

using namespace std;

int main() {


    int condition = 0;

    do
    {
        
        cout << "Enter a valid option to play" << endl;

        cout << "1: Create a new Player" << endl;

        cout << "9: Exist the program" << endl;

        cout << "Select an option [ ";
        
        cin >> condition;

        cout << " ]" << endl;

    } while (condition != 9);

    return 0;

}