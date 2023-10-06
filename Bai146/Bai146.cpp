#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void KTDX(int nn)
{
	int dn = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == nn)
		cout << "La DX";
	else
		cout << "Ko DX";
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	KTDX(n);
	
	return 0;
}