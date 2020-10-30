#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	string s, a;
	regex match = regex("a[a-z][0-99][0-9]55661");
	cin >> n;
	bool found = false;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (regex_match(a, match) == true)
		{
			s += a + " ";
			found = true;
		}
	}
	if (found == true)
	{
		cout << s;
	}
	else
	{
		cout << -1;
	}
}