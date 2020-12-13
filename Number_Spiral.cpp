/*
*    @Date    : 2020-12-14 03:25:27
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
#define int unsigned long long

signed main()
{
    int t, a, b, mx, diag, diff;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        mx = max(a, b);
        diff = a-b;
        diag = mx * mx - (mx - 1);
        if (mx&1)
            cout << diag - diff << '\n';
        else
            cout << diag + diff << '\n';
    }

    return 0;
}
