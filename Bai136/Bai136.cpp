#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void namnhuan(int xx,int yy)
{
	int n = xx;
	cout << "Nam nhuan: ";

	while (n <= yy)
	{
		bool dk1 = ((n % 4 == 0) && (n % 100 != 0));
		bool dk2 = (n % 400 == 0);
		if (dk1 || dk2)
			cout << n << " ";
		n = n + 1;
	}
}

int main()
{
	int x, y;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;

	namnhuan(x, y);

	return 0;
}