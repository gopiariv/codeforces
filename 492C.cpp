#include <bits/stdc++.h>
using namespace std;


int main()
{   
    ios::sync_with_stdio(false);

    long long n, r, avg, required_s;
    cin >> n >> r >> avg;
    required_s = avg*n;

    vector< pair<long long, long long> >v;
    long long s = 0,a, b;
    for (int i = 0; i < n; ++i)
    {
    	cin >> a >> b;
    	v.push_back(make_pair(b,r-a));
    	s += a;
    }
    sort(v.begin(),v.end());
    /*for (int i = 0;i<n; ++i)
    {
    	cout << v[i].first << " " << v[i].second << endl;
    	
    }*/
    long long essays = 0, i = 0;
    required_s -= s;
    while(required_s > 0)
    {
    	if (required_s > v[i].second)
    	{
    		essays +=v[i].first * v[i].second;
    		required_s -= v[i].second;

    	}
    	else
    	{
    		essays += v[i].first * required_s;
    		required_s = 0;
    	}
    	i++;
    }
    cout << essays <<endl;



    return 0;
}


