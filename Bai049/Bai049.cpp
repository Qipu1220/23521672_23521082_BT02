#include <iostream>
using namespace std;
void LietKeUocSo(int n);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int i = 1;
	LietKeUocSo(n);
	return 0;
}

void LietKeUocSo(int nn)
{
	int i = 1;
	cout << "Uoc so cua i: ";
	while (i <= nn)
	{
		if (nn % i == 0)
			cout << i << " ";
		i++;
	}
}