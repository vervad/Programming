#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int h1, m1, h2, m2;
	int delay = 15;
	char d;
	cin >> h1 >> d >> m1;
	cin >> h2 >> d >> m2;
	m1 += h1 * 60;
	m2 += h2 * 60;
	if (abs((m2 + h2 * 60) - (m1 + h1 * 60)) <= 15)
		cout << "Встреча состоится";
	else
		cout << "Встреча не состоится";
}
