#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

ll nC2(ll n)
{
	if(n < 2)
		return 0;
	return (n * (n - 1) / 2);
	
}

int main()
{   
    ios::sync_with_stdio(false);
    ll n, m, minNoOfPairs, maxNoOfPairs;
    cin >> n >> m;
    minNoOfPairs = (m - n % m) * (nC2(n/m)) + (n % m) * (nC2(n/m + 1));
    maxNoOfPairs = nC2(n - m + 1);
    cout << minNoOfPairs << " " << maxNoOfPairs <<"\n";
    return 0;
}

