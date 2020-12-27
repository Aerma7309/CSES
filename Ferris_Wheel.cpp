/*
*    @Date    : 2020-12-27 17:19:56
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
    int n, w, ans = 0;
    cin >> n >> w;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    for (int i = 0, j = n - 1; i <= j;)
        if (v[i] + v[j] <= w)
            ans++, i++, j--;
        else
            ans++, j--;
    cout << ans;
    return 0;
}
