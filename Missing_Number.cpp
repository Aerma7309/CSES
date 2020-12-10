/*
*    @Date    : 2020-11-20 19:35:47
*    @Author  : aerma7309 
*/

#include <bits/stdc++.h>
using namespace std;
int FastIO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

signed main()
{
    int n, xr;
    cin >> n;
    xr = n;
    for (int i = 1, t; i < n; i++)
    {
        cin >> t;
        xr ^= t;
        xr ^= i;
    }
    cout<<xr;
    return 0;
}
