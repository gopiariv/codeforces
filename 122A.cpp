#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> luckyNumbers;
	int num[] = {4,7, 47, 44, 74, 77, 474, 477, 447, 444, 774, 777 };
	luckyNumbers.assign(num, num + 12);
	
	for (int i = 0; i < luckyNumbers.size(); ++i)
	{
		if (n % luckyNumbers[i] == 0)
		{
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}