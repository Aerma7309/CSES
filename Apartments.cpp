/*
*    @Date    : 2020-12-26 19:29:12
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
    int n, m, k, ans = 0;
    cin >> n >> m >> k;
    vector<int> need(n), avail(m);
    for (int i = 0; i < n; i++)
        cin >> need[i];
    for (int i = 0; i < m; i++)
        cin >> avail[i];
    sort(need.begin(), need.end());
    sort(avail.begin(), avail.end());
    for (int i = 0, j = 0; i < n; i++)
    {
        while (j < m and avail[j] < need[i] - k)
            j++;
        if (j < m and avail[j] <= need[i] + k)
            j++, ans++;
    }
    cout << ans;
    return 0;
}
