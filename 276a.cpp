#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n, k, f, t, res = INT_MIN;
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		cin >> f >> t;
		res = max(res, min(f, f - (t - k)));
	}

	cout << res << endl;
}