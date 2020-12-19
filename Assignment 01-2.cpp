#include <iostream>
using namespace std;

int main()
{
	int j, k, m;
	k = 0;
		for (j = 1 ;j <= 3 ; j++)
		{
			for (m = 1; m <= 3; m++)
				k = k + 1;
			cout << "k = " << k << endl;
		}
}

// Console Output is
// k = 3
// k = 6
// k = 9
