#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int tong(int nn)
{
	int s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + i * i;
		i = i + 1;
	}
	return s;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout <<"S(n): "<<tong(n);
	return 0;
}