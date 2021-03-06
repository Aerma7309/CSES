/*
*    @Date    : 2020-12-27 17:33:59
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
    int n, m;
    cin >> n >> m;
    multiset<int> mp;
    for (int i = 0, t; i < n; i++)
        cin >> t, mp.insert(t);
    for (int i = 0, t; i < m; i++)
    {
        cin >> t;
        auto itr = mp.upper_bound(t);
        if (itr != mp.begin())
            --itr, cout << *itr << '\n', mp.erase(itr);
        else
            cout << -1 << '\n';
    }
    return 0;
}
