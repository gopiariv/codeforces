#include <bits/stdc++.h>
using namespace std;



int main()
{   
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    
    vector<bool> taskCompleted (n + 5, 0);
    long long int temp, timeTaken = 0, pos = 1;
    for (int i = 0; i < m; ++i)
    {
    	cin >> temp;
    	
    		if(temp - pos < 0)
    			timeTaken += (temp - pos + n);
    		else
    			timeTaken += (temp - pos);
    		taskCompleted[temp] = 1;
    		pos = temp;
    	

    }
    cout << timeTaken << "\n";
    return 0;
}


