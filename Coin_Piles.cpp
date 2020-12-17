/*
*    @Date    : 2020-12-16 19:42:31
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
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (((2 * a - b) % 3 == 0 or (2 * b - a) % 3 == 0) and (max(a, b) <= 2 * min(a, b)))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
