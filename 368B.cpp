#include <bits/stdc++.h>
using namespace std;

bool check[100005];

int main()
{
	ios::sync_with_stdio(false);
	int n, m, l, k = 0;
	cin >> n >> m;
	vector<int> a(100005),cnt(100005);
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	for (int i = n; i >=1; i--)
	{
		if(check[a[i]] == 0)
			{
				k = 1;
			}
		cnt[i] = cnt[i+1] + k;
		check[a[i]] = 1;
		k = 0;
		
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> l;
		cout << cnt[l] << "\n";
	}

}