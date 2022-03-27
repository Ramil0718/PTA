#include <iostream>
#include<string>
#include"math.h"
#include <iomanip>
using namespace std;

int main()
{
	int n = 0, start, temp, reigon;
	cin >> n;
	start = pow(10, n - 1);
	reigon = pow(10, n);

	for (start; start < reigon; start++)
	{
		int sum = 0,temp = start;
		while (sum <= start && temp != 0) {
			int mod = temp % 10;
			int nn = 1;
			for (int j = 0; j < n; j++)
				nn *= mod;
			sum += nn;
			temp /= 10;
		}
		if (start == sum)
		{
			cout << start << endl;
		}
	}
	return 0;
}

