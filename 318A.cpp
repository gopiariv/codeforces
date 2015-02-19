#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n, k, noOdds, count = 0;
	cin >> n >> k;
	if(n % 2 == 0)
		noOdds = n / 2;
	else
		noOdds = n / 2 + 1;
	if(k <= noOdds)
	{
		cout << 1 + (k - 1)* 2 << "\n";
	}
	else
	{
		cout << 2 + ( k - noOdds - 1) * 2 << "\n";
	}

	return 0;
}