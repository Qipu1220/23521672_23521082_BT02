#include <iostream>
using namespace std;
int INTkLN(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << INTkLN(n);
	return 0;
}

int INTkLN(int nn)
{
	long s = 0;
	int k = 0;
	while (s + k + 1 < nn)
	{
		k++;
		s = s + k;
	}
	return k;
}