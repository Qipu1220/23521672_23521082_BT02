#include <iostream>
using namespace std;
int INTkLN(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So nguyen k lon nhat: " << INTkLN(n);
	return 0;
}

int INTkLN(int nn)
{
	long t = 1;
	int k = 0;
	while (2 * t <= nn + 1)
	{
		t = t * 2;
		k++;
	}
	return k;
}