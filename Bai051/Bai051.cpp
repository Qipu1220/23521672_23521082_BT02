#include <iostream>
using namespace std;
int TichUocSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tich tat cac uoc so cua n: " << TichUocSo(n);
	return 0;
}

int TichUocSo(int nn)
{
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			t = t * i;;
		i++;
	}
	return t;
}