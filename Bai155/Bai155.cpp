#include <iostream>
using namespace std;
long Day(long&);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Day 2^(i+1): ";
	int i = 0;
	long t = 1;
	while (i <= n)
	{
		Day(t);
		i++;
	}
	return 0;
}

long Day(long& tt)
{
	tt = tt * 2;
	cout << tt << " ";
	return tt;
}
