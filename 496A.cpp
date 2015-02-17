#include <bits/stdc++.h>
using namespace std;

const int N = 100010;
int sum_array[N];

int main()
{   
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    sum_array[0] = 0;
    for(int i = 0; i < s.size()-1; i++)
    {
    	int temp = 0;
    	if (s[i] == s[i+1])
    	{
    		temp = 1;	    		
    	}
    	sum_array[i+1] = sum_array[i] + temp;
    }
    int m, l, r;
    cin >> m;
    /*for (int i = 0; i < sizeof(s)+1; ++i)
    {
    	cout << sum_array[i] << " ";
    }
    cout<< "\n";*/
    for (int i = 0; i < m; ++i)
    {
    	cin >> l >> r;
    	cout << sum_array[r-1] - sum_array[l-1]<< "\n";
    }
    
    return 0;
}


