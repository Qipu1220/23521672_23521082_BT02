#include <iostream>
using namespace std;
int Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(n) = " << Tong(n);
	return 0;	
}

int Tong(int nn)
{
	int i = 1;
	int ss = 0;
	while (i <= nn)
	{
		ss = ss + i;
		i++;
	}
	return ss;
}