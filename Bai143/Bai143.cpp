#include <iostream>
using namespace std;
void SoHT(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	SoHT(n);
	return 0;
}

void SoHT(int nn)
{
	int s = 0;
	int i = 1;
	while (i < nn)
	{
		if (nn % i == 0)
			s = s + i;
		i++;
	}
	if (s == nn)
		cout << "la so HT";
	else
		cout << "ko la so HT";
}


