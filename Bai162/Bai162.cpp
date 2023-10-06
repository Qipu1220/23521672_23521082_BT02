#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void KT(int nn)
{
	int flag = 1;
	int t = nn;

	while (t >= 10)
	{
		int dv = t % 10;
		int hc = (t / 10) % 10;
		if (hc < dv)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "Giam";
	else
		cout << "Ko Giam";


}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	KT(n);
	
	return 0;
}