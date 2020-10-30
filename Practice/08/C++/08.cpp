#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	char o;
	cin >> a >> o >> b;
	switch (o)
	{
	case '+': cout << a + b;
		break;
	case '-': cout << a - b;
		break;
	case '*': cout << a * b;
		break;
	case '/': cout << a / b;
		break;
	default: cout << "¬ведЄн неверный символ.";
	}
}