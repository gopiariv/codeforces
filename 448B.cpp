#include <bits/stdc++.h>
using namespace std;

int main()
{   
    ios::sync_with_stdio(false);
    string s, t;
    vector<int> a(26, 0), b(26, 0);
    cin >> s >> t;

    for (int i = 0; i < s.length(); ++i)
    {
    	a[s[i] - 'a']++;
    }
    for (int i = 0; i < t.length(); ++i)
    {
    	b[t[i] - 'a']++;
    }
    int j = 0;
    for (int i = 0; i < s.length(); ++i)
    {
    	if(j < t.length() and t[j] == s[i])
    		j++;
    }
    if(j == t.length())
    {
    	cout << "automaton\n";
    	return 0;
    }
    if(a == b)
    {
   		cout <<"array\n";
   		return 0;
    }
    //cout <<"check\n";
   	for (int i = 0; i < 26; ++i)
   	{	//cout << (char)('a'+ i) <<" " <<a[i] <<" " << b[i] << "\n";
   		if(a[i] < b[i])
   		{
   			cout << "need tree\n";
   			return 0;
   		}
   	}
   	cout <<"both\n";

    return 0;
}


