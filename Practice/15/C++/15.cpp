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
	cout << "�������� �����! \n";
	for (i = 1; i < 5; i++)
	{
		cin >> a;
		if (a == x)
		{
			cout << "����������! �� �������. \n";
			victory = true;
			break;
		}
		else if (a > x)
		{
			cout << "���������� ����� ������. \n";
		}
		else if (a < x)
		{
			cout << "���������� ����� ������. \n";
		}
	}
	if (victory == false)
	{
		cout << "�� ���������. ���� ��������:" << x << ". \n";
	}

	cout << "������ ������ �������? (1 - �� ) \n";
	cin >> restart;
	if (restart == 1)
	{
		main();
	}
}