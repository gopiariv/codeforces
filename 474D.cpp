//http://codeforces.com/problemset/problem/474/D

#include <bits/stdc++.h>
using namespace std;

#define loop(x,a,b) for(int (x) = (a);(x)<(b);(x)++)
#define rep(x,n)   for(int (x)=0;(x)<(n);(x)++)
#define md 1000000007

int arr[100005],k;

int calc(int x)
{

	if (x-k < 0)
		return arr[x]=1;
	if (arr[x] != -1)
		return arr[x];
	return arr[x]=(calc(x-k)+calc(x-1))%md;
     
}

int main()
{   
    ios::sync_with_stdio(false);
    rep(i,100005)
    {
    	arr[i] = -1;
    }
    int t,a,b;
    cin>>t>>k;
    rep(i,100005)
    {
    	calc(i);
    }
    loop(i,1,100003)
    {
    	arr[i] = (arr[i-1]+arr[i])%md;
    }
    rep(i,t)
    {
    	cin>>a>>b;
    	cout<<(arr[b]-arr[a-1]+md)%md<<"\n";

    }


    return 0;
}


