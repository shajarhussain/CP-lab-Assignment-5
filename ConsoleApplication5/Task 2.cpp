#include<iostream>
using namespace std;

int main()
{
	int num, factorial = 1, n;
	cout << "Enter the number whose factorial is required: ";
	cin >> num;

	do
	{
		factorial = factorial * num;
		num--;
	} while (num >= 1);
	cout << "Factorial = " << factorial;
	return 0;
}