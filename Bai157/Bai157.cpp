#include <iostream>
using namespace std;
void Day(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	Day(n);
	return 0;
}

void Day(int nn)
{
	float s = 0;
	int i = 1;
	cout << "Day 1 + 1/2 + 1/3 + 1/i: ";
	while (i <= nn)
	{
		s = s + (float)1 / i;
		cout << s << " ";
		i++;
	}
}