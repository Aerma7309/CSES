/*
*    @Date    : 2020-12-28 11:43:00
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
    int n, ans = 1e18;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    auto cost = [&](int a) -> int {int c=0;for(auto &i:v) c+=abs(i-a); return c; };
    // int i = 0, j = n - 1, mid, cl, cr, cm;
    // while (i + 1 < j)
    // {
    //     mid = i + (j - i) / 2;
    //     cl = cost(v[mid - 1]), cm = cost(v[mid]), cr = cost(v[mid + 1]);
    //     if (cl > cm and cm > cr)
    //         i = mid;
    //     else if (cl < cm and cm < cr)
    //         j = mid;
    //     else
    //         break;
    // }
    // for (int i = mid - 1; i <= mid + 1 and i < n; i++)
    //     ans = min(ans, cost(v[i]));
    // cout << ans << "\n";
    cout << cost(v[n / 2]);
    return 0;
}
