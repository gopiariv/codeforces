#include <bits/stdc++.h>
using namespace std;


int main()
{   
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    vector<int> alphabetCount(27, 0);
    int size = s.length(), count = 0;
    for (int i = 0; i < size; ++i)
    {
    	alphabetCount[s[i] - 'a']++ ;
    }
    
    for (int i = 0; i < 27; ++i)
    {
    	if(alphabetCount[i] % 2 != 0)
    		count++ ;
    }

    if(count % 2 != 0 or (count == 0))
    	cout <<"First\n";
    else
    	cout << "Second\n";

    return 0;
}


