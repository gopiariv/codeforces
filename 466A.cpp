#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, a, b, cost = 0;
	cin >> n >> m >> a >> b;
	
	if(b < m * a)
	{
		cost = (n / m ) * b ;
		if((n % m ) * a >= b)
			cost += b;
		else
			cost += (n % m) * a;
	}
	else
		cost = n * a;
	cout << cost << "\n";
	return 0;
}