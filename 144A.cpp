#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, swaps;
	cin >> n;
	vector<int> heights(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> heights[i];
	}
	int minIndex = 0, maxIndex = 0;
	for (int i = 0; i < n; ++i)
	{
		if(heights[i] > heights[maxIndex])
			maxIndex = i;
		else
			if(heights[i] <= heights[minIndex])
				minIndex = i;
	}
	swaps = maxIndex + n - minIndex - 1;
	if(minIndex < maxIndex)
		--swaps;

	cout << swaps <<"\n";


	return 0;
}