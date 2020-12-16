/*
*    @Date    : 2020-12-16 19:12:04
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
const int mod = 1e9 + 7;
signed main()
{
    int n;
    cin >> n;
    int ans = 1;
    while (n--)
    {
        ans <<= 1;
        ans %= mod;
    }
    cout << ans;
    return 0;
}
