#include <bits/stdc++.h>
using namespace std;


int main()
{   
    ios::sync_with_stdio(false);
    int n, m, k;
    cin >> n >> m >> k;
    int a[m + 1], noOfPotentialFriends = 0;
    for (int i = 0; i < m + 1; ++i)
    {
    	cin >> a[i];
    }

    for (int i = 0; i < m; ++i)
    {
    	noOfPotentialFriends += (__builtin_popcount(a[i] ^ a[m]) <= k);
    }

    cout << noOfPotentialFriends <<"\n";
    return 0;
}


