#include <bits/stdc++.h>
using namespace std;


int main()
{   
    ios::sync_with_stdio(false);
    string s, t;
    cin >> s >> t;
    int n = s.size();
    for (int i = n - 1 ; i > -1; --i)
    {
    	if(s[i] != 'z')
    	{
    		s[i]++;
    		if(s >= t)
    			s = "No such string";
    		break;
    	}
    	else
    		s[i] = 'a';
    }

    cout << s << "\n";

    return 0;
}


