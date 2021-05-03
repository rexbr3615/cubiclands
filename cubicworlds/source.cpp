#include <iostream>
#include <Windows.h>

using namespace std;
int Number; 

int main()

{
 	system("COLOR B");
	SetConsoleTitle("cubiclands test 0.00001");

	ioPoint:

	int choice;
	cout << "1. New Value, 2. Read current Value, 3. exit:" ;
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "give New Value: ";
		cin >> Number;
		system("CLS");
		cout << "New Value has been set!" << endl;
		system("PAUSE");
		goto ioPoint;
	case 2:
		cout << "Current Value Is: " << Number << endl;
		system("PAUSE");
		goto ioPoint;
	case 3:
		cout << "Bye!" << endl;
		Sleep(300);

		return 0;
	default:
		cout << "Unknown case!" << endl;
		system("PAUSE");
		goto ioPoint;
	}
}