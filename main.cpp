/*Task 1. Write a program that displays on the screen
a line with a given symbol, vertical or horizontal, and the line can be drawn quickly, normally
and slowly. Organize communication with the user
through the menu*/
#include <iostream>
#include <windows.h> 
using namespace std;

int main()
{
    char symbol;
    int line, speed, size;
    cout << "Enter a symbol :  ";
    cin >> symbol;
    cout << "Enter the number of symbol from 2 to 25 = ";
    cin >> size;
    cout << "choose which line to draw horizontal-1 vertical-2 = " << endl;
    cin >> line;
    cout << "select line output speed slow-1 medium-2 fast-3 = " << endl;
    cin >> speed;
    if (speed > 3 || speed < 1 ||
        line < 1 || line > 2 ||
        size < 2 || size > 25)
    {
        cout << "Error!";
    }
    switch (line)
    {
        case 1:
            for (int i = 1; i <= size; ++i)
            {
                if (speed == 1)
                    Sleep(20);
                else if (speed == 2)
                    Sleep(400);
                else if (speed == 3)
                    Sleep(1000);
                cout << symbol;
            }
            break;
        case 2:
            for (int i = 1; i <= size; ++i)
            {
                if (speed == 1)
                    Sleep(20);
                else if (speed == 2)
                    Sleep(400);
                else if (speed == 3)
                    Sleep(1000);
                cout << symbol << "\n";
            }
            break;
    }
    system("pause");
	return 0;
}