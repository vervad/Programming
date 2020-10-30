#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 3;
	int b = 3.14;
	double c = 3;
	double d = 3.14;
	cout << a << "\n" << b << "\n" << c << "\n" << d << "\n";
	cout << "Переменные a, c и d отображаются верно. Неверно отображается только b, из-за того что переменные типа int не сохраняют дробную часть числа.";
}
