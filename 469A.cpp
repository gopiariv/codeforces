#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, p, q,  temp;
	cin >> n;
	vector<int> levels(101, 0);
	cin >> p;
	for (int i = 0; i < p; ++i)
	{
		cin >>temp;
		levels[temp] = 1;
	}
	cin >> q;
	for (int i = 0; i < q; ++i)
	{
		cin >>temp;
		levels[temp] = 1;
	}
	if(accumulate(levels.begin(), levels.end(), 0) == n)
		cout << "I become the guy.\n";
	else
		cout <<"Oh, my keyboard!\n";

}