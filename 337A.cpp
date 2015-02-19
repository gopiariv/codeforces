#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, a[100];
	cin >> n >> m;
	for (int i = 0; i < m; ++i)
	{
		cin >> a[i];
	}
	sort(a,a+m);
	int diff = 100000;
	for (int i = 0; i + n - 1 <  m; ++i)
	{
		if(a[i + n - 1] - a[i] < diff)
			diff = a[i + n - 1] - a[i];
	}
	cout << diff << "\n";

	return 0;
}