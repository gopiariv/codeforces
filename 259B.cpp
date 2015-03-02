#include <bits/stdc++.h>
using namespace std;



int main()
{   
    ios::sync_with_stdio(false);
    int a, b, c, d, e, f, g, h, i;

    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;

    a = (2 * g + h - b) / 2;
    int val = a + b + c;
    cout << a << " " << b << " " << c <<"\n";
    cout << d << " " << val - d - f  << " " << f <<"\n";
    cout << g  << " " << h << " " << val - g - h <<"\n";

    return 0;
}

