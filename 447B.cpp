#include <bits/stdc++.h>
using namespace std;

int main()
{   
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int n, k, temp, maxValue = -1;
    cin >> k;
    n = s.length();
    vector<int> w;
    for (int i = 0; i < 26; ++i)
    {
    	cin >> temp;
    	maxValue = max(maxValue, temp);
    	w.push_back(temp);
    }
    long long int ans = 0;
    for (int i = 0; i < s.length(); ++i)
    	ans += (i + 1) * w[s[i] - 'a'];

    ans += maxValue * ((((n + k)*(n + k + 1))/2) - ((n*(n + 1))/2));
    cout << ans << "\n";
    return 0;
}


