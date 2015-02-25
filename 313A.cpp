#include <bits/stdc++.h>
using namespace std;

int main()
{	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	if(n < 0)
	{
		if(n/10 > ((n/100)*10 - abs(n) % 10))
			n /= 10;
		else
			n = (n/100)*10 - abs(n) % 10;
	}
	cout << n <<"\n";
	return 0;
}