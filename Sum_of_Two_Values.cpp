/*
*    @Date    : 2020-12-28 10:55:09
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
    int n, s;
    cin >> n >> s;
    bool flag = true;
    vector<pair<int, int>> v;
    for (int i = 0, a; i < n; i++)
        cin >> a, v.push_back({a, i + 1});
    sort(v.begin(), v.end(), [&](auto &a, auto &b) { return a.first < b.first; });
    for (int i = 0, j = n - 1; i < j;)
        if (v[i].first + v[j].first == s)
            cout << v[i].second << " " << v[j].second, flag = false, i = n;
        else if (v[i].first + v[j].first > s)
            j--;
        else
            i++;
    if (flag)
        cout << "IMPOSSIBLE";
    return 0;
}
