#include <iostream>
using namespace std;
void ToanLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	ToanLe(n);
	return 0;
}

void ToanLe(int nn)
{
	int flag = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		cout << "Toan le";
	else
		cout << "Ko toan le";
}