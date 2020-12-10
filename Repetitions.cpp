/*
*    @Date    : 2020-11-20 19:42:36
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
    string s;
    int ans = 0, cnt = 1;
    cin >> s;
    char ch = '?';
    for (auto i : s)
    {
        if (i == ch)
            ++cnt;
        else

            cnt = 1, ch = i;
        ans = max(ans, cnt);
    }
    cout << ans;
    return 0;
}
