#include <bits/stdc++.h>
using namespace std;



int main()
{   
    ios::sync_with_stdio(false);
    int n, s, t, temp;;
    cin >> n >> s >> t;
    if(s == t)
    {
    	cout <<"0\n";
    	return 0;
    }
    vector<int> p;
    p.push_back(0);
    for (int i = 0; i < n; ++i)
    {
    	cin >> temp;
    	p.push_back(temp);
    }
    int shuffles = 0, pos = s;
    bool flag = 0;
    while ((pos != s) or (shuffles == 0))
    {
    	pos = p[pos];
    	shuffles++;
    	if(pos == t)
    	{
    		flag = 1;
    		break;
    	}
    	
    }
    if(flag)
    	cout << shuffles << "\n";
    else
    	cout << "-1\n";
    return 0;
}


