#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, temp;
	cin >> n;
	vector <int> p(102);
	for (int i = 1; i < n + 1; ++i)
	{
		cin >> temp; 
		p[temp] = i;
	}
	for (int i = 1; i < n + 1; ++i)
	{
		cout << p[i] << " ";
	}
	cout <<"\n";
	return 0;
}