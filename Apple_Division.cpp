/*
*    @Date    : 2020-12-24 15:26:54
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
    int n, sum = 0, ans = 1e14;
    cin >> n;
    vector<int> v(n);

    for (auto &i : v)
    {
        cin >> i;
        sum += i;
    }
    for (long i = 1; i < (1 << n); i++)
    {
        int local_sum = 0;
        for (long j = 0; j < 32; j++)
            if (i & (1 << j))
                local_sum += v[j];
        ans = min(ans, abs(sum - 2 * local_sum));
    }
    cout << ans;
    return 0;
}
