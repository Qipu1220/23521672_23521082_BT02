#include <iostream>
using namespace std;
void TangDan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	TangDan(n);
	return 0;
}

void TangDan(int nn)
{
	int flag = 1;
	int t = nn;
	while (t >= 10)
	{
		int dv = t % 10;
		int hc = (t / 10) % 10;
		if (hc > dv)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "Tang dan tu trai sang phai";
	else
		cout << "Ko tang dan tu trai sang phai";
}