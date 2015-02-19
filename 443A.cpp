#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin, s);	
	vector<int> alphabets(26, 0);	
	for (int i = 1; i < s.length() ; ++i)
	{		
		if ((s[i] - 'a' < 26) && (s[i] - 'a' >=0) )
			alphabets[s[i] - 'a'] = 1 ;
		
	}
	
	cout << accumulate(alphabets.begin(), alphabets.end(), 0) <<"\n";
	return 0;
}