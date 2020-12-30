/*
*    @Date    : 2020-12-30 23:16:08
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
    int n, pos;
    cin >> n;
    vector<int> v;
    for (int i = 0, t; i < n; i++)
    {
        cin >> t;
        pos = upper_bound(v.begin(), v.end(), t) - v.begin();
        if (pos < v.size())
            v[pos] = t;
        else
            v.push_back(t);
    }
    cout << v.size();
    return 0;
}
