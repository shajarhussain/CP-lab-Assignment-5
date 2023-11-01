#include<iostream>
using namespace std;
int main()
{
	char end, op;
	float num1, num2, calculated;
	do
	{
		cout << "Enter first number, operator, and second number: ";
		cin >> num1 >> op >> num2;
		switch (op)
		{
		case'+':
		{
			calculated = num1 + num2;
			break;
		}
		case'-':
		{
			calculated = num1 - num2;
			break;
		}
		case'*':
		{
			calculated = num1 * num2;
			break;
		}
		case'/':
		{
			calculated = num1 / num2;
			break;
		}
		default:
		{
			cout << "Enter correct operator.";
			break;
		}
		}
		cout << "Answer = " << calculated << endl;
		cout << "Do another (y/n)? ";
		cin >> end;
		cout << endl;
	} while (end == 'Y' || end == 'y');
	return 0;
}