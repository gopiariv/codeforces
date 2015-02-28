#include <bits/stdc++.h>
using namespace std;

int main()
{   
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int h1 = 0, h2, minTime = 0;
    
    for (int i = 0; i < n; ++i)
    {
    	cin >> h2;
    	minTime += (abs(h1 - h2) + 2);
    	h1 = h2;
    }
    cout << --minTime  <<"\n";

    return 0;
}


