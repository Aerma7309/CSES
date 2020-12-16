/*
*    @Date    : 2020-12-16 19:18:23
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
    int n, ans = 0, mul = 5;
    cin >> n;
    while (int t = n / mul)
    {
        ans += t;
        mul *= 5;
    }
    cout << ans;
    return 0;
}
