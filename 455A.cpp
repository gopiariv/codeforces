#include <bits/stdc++.h>
using namespace std;

const int N = 1000010;
int count_array[N];
long long f[N];

int main()
{   
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    memset(count_array, 0, sizeof(count_array));
    for(int i = 0; i < n; i++)
    {
    	int temp;
    	cin >> temp;
    	count_array[temp]++;

    }
    f[0] = 0;
    for (int i = 1; i < N; ++i)
    {
    	f[i] = (long long)i * count_array[i];
    	if (i - 2 >= 0)
    	{
    		f[i] += f[i-2];
    	}
    	if (f[i-1] > f[i])
    	{
    		f[i] = f[i-1];
    	}
    }

    cout << f[N-1] << endl;
    return 0;
}
