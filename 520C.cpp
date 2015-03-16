#include <bits/stdc++.h>
using namespace std;

 
#define md 1000000007


int main()
{   
    ios::sync_with_stdio(false);
    map<char, long long int> count;
    count['A'] = 0;
    count['C'] = 0;
    count['G'] = 0;
    count['T'] = 0;
    int n;
    char s;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
    	cin >> s;
    	count[s]++;
    }
    long long int k, noOfStrings = 1,m;
    k = max(max(count['A'], count['C']), max(count['G'], count['T']));
    m = (count['A'] == k) + (count['C'] == k) + (count['G'] == k) + (count['T'] == k);
    for (int i = 0; i < n; ++i)
    {
    	noOfStrings = (noOfStrings * m) % md;
    }
    cout << noOfStrings <<"\n";
    return 0;
}


