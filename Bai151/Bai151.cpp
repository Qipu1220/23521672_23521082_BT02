#include <iostream>
using namespace std;
void DangDB(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	DangDB(n);
	return 0;
}

void DangDB(int nn)
{
	int flag = 1;
	int t = nn;
	while (t > 1)
	{
		int du = t % 2;
		if (du != 0)
			flag = 0;
		t = t / 2;
	}
	if (flag == 1)
		cout << "la dang 2^m";
	else
		cout << "ko la dang 2^m";
}
