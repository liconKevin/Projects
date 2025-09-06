// CasinoCity.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    int function = 0;

	do
	{

		system("cls");

		cout << "Hi, Welcome to Casino City" << endl;

		cout << "Select one of the following options to start: " << endl;

		cout << "1.- Create Account" << endl;

		cout << "2.- Sign In" << endl;

		cout << "9.- Exit\n" << endl;

		cin >> function;



	} while (function != 9);


}