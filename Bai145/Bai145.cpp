#include <iostream>
using namespace std;
void SoCP(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	SoCP(n);
	return 0;
}

void SoCP(int nn)
{
	int flag = 0;
	int i = 1;
	while (i <= nn)
	{
		if (i * i == nn)
			flag = 1;
		i++;
	}
	if (flag == 1)
		cout << "La so CP";
	else
		cout << "Ko la so CP";
}