/*
*    @Date    : 2020-12-28 11:18:59
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
    int n, ans = -1e9, s = 0, mx = -(1e9 + 5),flag=0;
    cin >> n;
    for (int j = 0, i; j < n; j++)
        cin >> i, mx = max(mx, i), flag = ((i > 0) or flag), s = ((s + i > 0) ? s + i : 0), ans = max(s, ans);
    cout << (flag ? ans : mx);
    return 0;
}
