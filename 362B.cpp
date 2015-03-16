#include <bits/stdc++.h>
using namespace std;

int main()
{   
    ios::sync_with_stdio(false);
    int n, m, temp;
    vector<int> dirtySteps;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
    	cin >> temp;
    	if(temp == 1 or temp == n)
    	{
    		cout << "NO\n";
    		return 0;
    	}
    	dirtySteps.push_back(temp);
    }
    sort(dirtySteps.begin(), dirtySteps.end());
    for (int i = 0; i < (m - 2); ++i)
    {
    	if(dirtySteps[i + 1] - dirtySteps[i] == 1 and dirtySteps[i + 2] - dirtySteps[i + 1] == 1)
    	{
    		cout << "NO\n";
    		return 0;
    	}
    }
    cout << "YES\n";

    return 0;
}


