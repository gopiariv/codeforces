#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	int n, a, b, c, pieces = 0;
	cin >> n >> a >> b >> c;

	for (int i = 0; i*a <= n; ++i)
	{
		for (int j = 0; i*a + j*b <= n; ++j)
		{
			int k = (n - i*a - j*b)/c;
			if (i*a + j*b + k*c == n)
			pieces = max(i + j + k, pieces);
		

		}
	}
	cout << pieces <<"\n";

}

//DP Solution
/*
#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	int a, b, c, n;
	cin >> n >> a >> b >> c;
	memset(f, -1, sizeof(f));
	f[0] = 0;
	for (int i = 1; i <= n; ++i)
	{
		int temp = max( f[at((i-a))], max(f[at(i-b)],f[at(i-c)]));
		if(temp == -1)
			f[i] = -1;
		else
			f[i] = temp + 1;
	}
	cout << f[n] << "\n";

}


*/