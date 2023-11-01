#include<iostream>
using namespace std;

int main()
{
	int num, octa[20], i = 0;
	cout << "Enter the number whose Octal is required: ";
	cin >> num;
	do
	{
		octa[i] = num % 8;
		num = num / 8;
		i++;
	} while (num != 0);

	i = i - 1;
	do {
		cout << octa[i];
		i--;
	} while (i >= 0);
	return 0;
}