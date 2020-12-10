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
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int res = 0;
    int prev_max = v[0];
    for (int i = 1, t; i < v.size(); i++)
    {
        t = prev_max - v[i];
        if (t > 0)
            res += t;
        prev_max = max(prev_max,v[i]);
    }
    cout << res;
    return 0;
}
