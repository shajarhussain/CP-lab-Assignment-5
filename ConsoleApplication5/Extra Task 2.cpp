#include<iostream>
using namespace std;
int main()
{
	int series = 1;
	do
	{
		cout << series << " ";
		series = series * 2;
	} while (series <= 512);
	return 0;
}