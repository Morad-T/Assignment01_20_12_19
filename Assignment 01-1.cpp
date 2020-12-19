#include <iostream>
using namespace std;

int main()
{
	unsigned long long int Factorial;
	int N, i;
	Factorial = 1;
	cout << "Enter a Number To Calculate its Factorial (Not more than 20 or a buffer overflow will occur) \n";
	cin >> N;
	for (i = N; i > 1; i--)
		Factorial = Factorial * i;
	cout << N << "! = " << Factorial;
	return 0;
}
