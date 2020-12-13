/*
*    @Date    : 2020-11-20 20:05:03
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

#define int long long
signed main()
{
    int n;
    cin >> n;
    int res = 0;
    int mx = 0;
    for (int i = 0, t; i < n; i++)
    {
        cin >> t;
        mx = max(mx, t);
        res += mx - t;
    }
    cout << res;
    return 0;
}
