#include <bits/stdc++.h>
using namespace std;



int main()
{   
    ios::sync_with_stdio(false);
    int n, m;   
    cin >> n >> m; 
    map<string, string> dict;
    string a, b;
    for (int i = 0; i < m; ++i)
    {
    	cin >> a >> b;
    	if(b.length() < a.length())
    		dict[a] = b;
    	else
    		dict[a] = a;
    }
    for (int i = 0; i < n; ++i)
    {
    	cin >> a;
    	cout << dict[a] <<" ";
    }
    cout <<"\n";
    return 0;
}


