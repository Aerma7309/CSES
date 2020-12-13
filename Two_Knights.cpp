/*
*    @Date    : 2020-12-14 04:02:43
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
    for (int i = 1; i <= n; i++)
        cout <<((i - 1) * (i + 4) * (i * i - 3 * i + 4) / 2)<< '\n';
    return 0;
}
