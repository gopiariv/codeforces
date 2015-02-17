#include <bits/stdc++.h>
using namespace std;


int main()
{   
    ios::sync_with_stdio(false);

    int n, sum = 0, k = 0,i;
    cin >> n;
    for (i = 1; n>=sum; ++i)
    {
    	k += i;
    	sum += k;


    }
    cout<<i-2;

    return 0;
}


