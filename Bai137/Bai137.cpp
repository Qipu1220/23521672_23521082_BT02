#include <iostream>
#include <iomanip>
using namespace std;
float Ham(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Gia tri ham so f la:" << fixed << setprecision(1) << Ham(x);
	return 0;
}

float Ham(float xx)
{
	float f;
	if (xx >= 5)
		f = 2 * xx * xx + 5 * xx + 9;
	else
		f = 2 * xx * xx + 4 * xx - 9;
	return f;
}