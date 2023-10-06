#include <iostream>
using namespace std;
int HC(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Chu so hang chuc: " << HC(n); 
	return 0;
}

int HC(int nn)
{
	return (nn / 10) % 10;
}
 