/*
*    @Date    : 2020-12-28 10:19:03
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
    int n, ans = 0, t = 0;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0, a, b; i < n; i++)
        cin >> a >> b, v.push_back({a, b});
    sort(v.begin(), v.end(), [&](auto &a, auto &b) { return a.second < b.second; });
    for (int i = 0; i < n;i++)
        if (v[i].first >= t)
            ans++, t = v[i].second;
    cout<<ans;
}
