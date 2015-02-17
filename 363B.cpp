#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int n, k, minHeight, height = 0, index;
	cin >> n >> k;
	int h[n+10];
	for (int i = 0; i < n; ++i)
	{
		cin >> h[i+1];
	}
	for (int i = 1; i <= k; ++i)
	{
		height += h[i];
	}
	minHeight = height;
	index = 1;
	for (int i = k+1; i <= n; ++i)
	{
		height += (h[i] - h[i-k]);
		//cout << height << " " << minHeight << " " << index << "\n";
		if(minHeight > height)
		{
			minHeight = height;
			index = i - k + 1;
		}
	}
	cout << index << "\n";
}