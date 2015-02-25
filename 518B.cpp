#include <bits/stdc++.h>
using namespace std;

int main()
{   
	
    ios::sync_with_stdio(false);
    string s, t;
    cin >> s >> t;
    vector<int> arrS(70, 0);
    vector<int> arrT(70, 0);
    for (int i = 0; i < s.size(); ++i)
    {
    	arrS[s[i] - 'A'] ++;
    }

    for (int i = 0; i < t.size(); ++i)
    {
    	arrT[t[i] - 'A'] ++;
    }
    int temp, yay = 0, whoops = 0;
    for (int i = 0; i < 70; ++i)
    {
    	temp = min(arrS[i], arrT[i]);
    	yay += temp;
    	arrT[i] -= temp;
    	arrS[i] -= temp;
    }
    for (int i = 0; i < 28; ++i)
    {
    	temp = min(arrS[i], arrT[i + 32]);
    	arrT[i + 32] -= temp;
    	arrS[i] -= temp;
    	whoops += temp;
    }
    for (int i = 32; i < 68; ++i)
    {
    	temp = min(arrS[i], arrT[i - 32]);
    	arrT[i - 32] -= temp;
    	arrS[i] -= temp;
    	whoops += temp;
    }
    cout << yay << " " << whoops << "\n" ;


    return 0;
}


