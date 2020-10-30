#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int a, i;
	int x = (rand() % 100) + 1;
	bool victory = false;
	int restart;
	cout << "Угадайте число! \n";
	for (i = 1; i < 5; i++)
	{
		cin >> a;
		if (a == x)
		{
			cout << "Поздравляю! Вы угадали. \n";
			victory = true;
			break;
		}
		else if (a > x)
		{
			cout << "Загаданное число меньше. \n";
		}
		else if (a < x)
		{
			cout << "Загаданное число больше. \n";
		}
	}
	if (victory == false)
	{
		cout << "Вы проиграли. Было загадано:" << x << ". \n";
	}

	cout << "Хотите начать сначала? (1 - ДА ) \n";
	cin >> restart;
	if (restart == 1)
	{
		main();
	}
}