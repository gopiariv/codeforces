#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, maxValue = 0;
	cin >> a >> b >> c;

	maxValue = max((a + b + c), max((a * (b + c)), max((a*b + c), max(a + b * c, max(a * b * c, (a + b)*c)))));
	cout << maxValue << "\n";
	
	return 0;
}