#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void KTdang(int nn)
{
	int flag = 1;
	int t = nn;
	while (t > 1)
	{
		int du = t % 3;
		if (du != 0)
			flag = 0;
		t = t / 3;
	}
	if (flag == 1)
		cout << "La dang";
	else
		cout << "Ko la dang";

}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	KTdang(n);
	
	return 0;
}