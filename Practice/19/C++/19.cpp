#include <iostream>
#include <string>
using namespace std;

void combine(string letters, string left, short repeats);

short length(0);
string input;
int main()
{
	cin >> length;
	cin >> input;

	combine("", input, length - input.length());
}

void combine(string letters, string left, short repeats)
{
	if (letters.length() != length)
	{
		if (repeats > 0)
		{
			left = input;
		}
		for (char word : left)
		{
			combine(letters + word, string(left).erase(left.find(word), 1), (letters.find(word) != string::npos) ? repeats - 1 : repeats);
		}
	}
	else
	{
		cout << letters << " ";
	}
}