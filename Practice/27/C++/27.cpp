#include <iostream>
using namespace std;

void top(int* arr)
{
	int n = 5;
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (arr[j] < arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
}

int main()
{
	int n;
	cin >> n;
	int* arr = new int[5];
	for (int i = 0; i < 5; i++)
		arr[i] = -1;
	if (n <= 5)
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			top(arr);
			for (int j = 0; j < i + 1; j++)
				cout << arr[j] << ' ';
			cout << '\n';
		}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			cin >> arr[i];
			top(arr);

			for (int j = 0; j < i + 1; j++)
				cout << arr[j] << ' ';
			cout << '\n';
		}
		for (int i = 5; i < n; i++)
		{
			int input;
			cin >> input;
			bool isSorted = true;
			for (int j = 4; j >= 0; j--)
			{
				if (input < arr[j])
				{
					arr[0] = input;
					isSorted = false;
					break;
				}
			}
			if (!isSorted)
				top(arr);
			for (int j = 0; j < 5; j++)
				cout << arr[j] << ' ';
			cout << '\n';
		}
	}
	delete[] arr;
}