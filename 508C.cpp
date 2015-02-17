#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef vector<pii > vii;
typedef vector<pair<int, pair<int, int> > > viii;
typedef pair<ll,ll> pll;
typedef vector<string> vs;
typedef vector<vii> vvii;

#define pb push_back
#define mp make_pair
#define X first
#define Y second
#define MEM(a,b) memset(a,(b),sizeof(a))
#define all(a) a.begin(),a.end()
#define loop(x,a,b) for(int (x) = (a);(x)<(b);(x)++)
#define rep(x,n)   for(int (x)=0;(x)<(n);(x)++)
#define tr(c,it) for(typeof((c).begin()) it = (c).begin(); it != (c).end(); it++)
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define ain(a,n) int ((a)[(n)]); for(int i=0; i<(n); i++) cin>>((a)[i])  
#define md 1000000007
#define MAXN 200005

int main()
{   
    ios::sync_with_stdio(false);
    int m, t, r;
    cin >> m >> t >> r;
    if(t < r)
    {
    	cout << -1 << "\n";
    	return 0;
    }
    int arr[1005];
    for (int i = 0; i < 1005; ++i)
    {
    	arr[i] = 0;
    }
    int w[305];
    int temp,noOfCandles = 0;
    for (int i = 1; i <= m; ++i)
    {
    	cin >> temp;
    	w[i] = temp + 300;
    }
    //sort(w+1, w+m);
    for (int i = m; i >= 1; --i)
    {
    	//cout << arr[w[i]] << "  " << w[i] << "\n";
    	if(arr[w[i]] < r)
    	{
    		//cout << " jn" <<endl;
    		noOfCandles += (r - arr[w[i]]);
    		for(int j = w[i] - t + 1 ; j <=(w[i] - t + (r - arr[w[i]]) )  ; j++)
    		{
    			//cout <<" j  " <<j << " ";
    			arr[j] += j - (w[i] - t)  ;
    			

    		}
    		for (int j =(w[i] - t + (r - arr[w[i]])) ; j <= w[i] ; ++j)
    		{
    			arr[j] = r;
    		}
    	}
    	
    }
    cout << noOfCandles << "\n";



    return 0;
}


