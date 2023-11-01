#include<iostream>
using namespace std;
int main()
{
	int start = 7, i = 1, series;
	do
	{
		series = start * i;
		cout << series << " ";
		i++;
	} while (series < 98);
	return 0;
}