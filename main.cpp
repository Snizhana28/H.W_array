/*Task 2. Write the game "Cubes". The user and the computer take turns rolling 2 dice. The winner is the one who has
according to the results of 3 throws, the amount is more. Predict
beautiful game interface*/
#include <iostream>
using namespace std;

int main()
{
	int player, computer, statisticsPlayer = 0, statisticsComputer = 0;
	srand(time(NULL));

	cout << "\t\t\" Cubes game.\" \nThe user and the computer take turns rolling 2 dice.\nThe winner is the one who has"
		"according to the results of 3 throws, the amount is more.\nClick to roll the dice : Enter\n";

	for (int j = 1, i = 1; i <= 12; i++)
	{
		int cube = rand() % 6 + 1;

		if (i % 4 == 1)
		{
			player = 0;
			cout << "Round # " << j << "\nPlayer : " 
				"------------------------------------------------------------------------------------------""\n";
			cin.get();
			j++;
		}
		else if (i % 4 == 3)
		{
			computer = 0;
			cout << "Computer : "
				"----------------------------------------------------------------------------------------""\n";
		}
		if (i % 4 == 1 || i % 4 == 2)
		{
			player += cube;
			statisticsPlayer += cube;
		}
		else
		{
			computer += cube;
			statisticsComputer += cube;
		}

		switch (cube)
		{
		case 1:
		{
			cout << "# # # # # # #\n";
			cout << "#           #\n";
			cout << "#           #\n";
			cout << "#     X     #\n";
			cout << "#           #\n";
			cout << "#           #\n";
			cout << "# # # # # # #\n";
			cout << endl;
		} break;
		case 2:
		{
			cout << "# # # # # # #\n";
			cout << "#           #\n";
			cout << "#           #\n";
			cout << "#   X   X   #\n";
			cout << "#           #\n";
			cout << "#           #\n";
			cout << "# # # # # # #\n";
			cout << endl;

		} break;
		case 3:
		{
			cout << "# # # # # # #\n";
			cout << "#           #\n";
			cout << "#   X       #\n";
			cout << "#     X     #\n";
			cout << "#       X   #\n";
			cout << "#           #\n";
			cout << "# # # # # # #\n";
			cout << endl;

		} break;
		case 4:
		{
			cout << "# # # # # # #\n";
			cout << "#           #\n";
			cout << "#   X   X   #\n";
			cout << "#           #\n";
			cout << "#   X   X   #\n";
			cout << "#           #\n";
			cout << "# # # # # # #\n";
			cout << endl;

		} break;
		case 5:
		{
			cout << "# # # # # # #\n";
			cout << "#           #\n";
			cout << "#   X   X   #\n";
			cout << "#     X     #\n";
			cout << "#   X   X   #\n";
			cout << "#           #\n";
			cout << "# # # # # # #\n";
			cout << endl;

		
		} break;
		case 6:
		{
			cout << "# # # # # # #\n";
			cout << "#           #\n";
			cout << "#   X   X   #\n";
			cout << "#   X   X   #\n";
			cout << "#   X   X   #\n";
			cout << "#           #\n";
			cout << "# # # # # # #\n";
			cout << endl;

		} break;
		default:
			break;
		}

		if (i % 4 == 0)
		{
			if (player > computer)
			{
				cout << "In round # " << j - 1 << " player won!\n";
			}
			else if (player == computer)
			{
				cout << "In round # " << j - 1 << " draw!\n";
			}
			else
			{
				cout << "In round # " << j - 1 << " won a computer!\n";
			}
		}
	}
	cout << "\n->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n\n";

	if (statisticsPlayer > statisticsComputer)
	{
		cout << "In game " " player won!\nScore:\nplayer " << statisticsPlayer << " : computer " << statisticsComputer;
	}
	else if (statisticsPlayer == statisticsComputer)
	{
		cout << "In game " " draw!\nScore:\nplayer " << statisticsPlayer << " : computer " << statisticsComputer;
	}
	else
	{
		cout << "In game " " won a computer!\nScore:\nplayer " << statisticsPlayer << " : computer " << statisticsComputer;
	}
	cout << "\n\n->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->";
	cout << endl;
	return 0;
}