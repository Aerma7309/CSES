/*
*    @Date    : 2020-12-28 16:06:39
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
    int n, ans = 0;
    cin >> n;
    map<int, int> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0, j = 0; i < n; i++)
    {
        while (j < n and m[v[j]] < 1)
            m[v[j]]++, j++;
        ans = max(ans, j - i), m[v[i]]--;
    }
    cout << ans;
    return 0;
}
