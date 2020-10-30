#include <iostream>
using namespace std;

double BMI(double weight, double height)
{
	double BMI = weight / (height * height);
	return BMI;
}

void printBMI(double BMI)
{
	if (BMI < 18.5)
		cout << "Underweight";
	else if (BMI < 25.0)
		cout << "Normal weight";
	else if (BMI < 30.0)
		cout << "Overweight";
	else
		cout << "Obesity";
}

int main()
{
	double weight, height;
	cin >> weight >> height;
	height = height / 100;
	printBMI(BMI(weight, height));
}
