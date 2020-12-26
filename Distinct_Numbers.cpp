/*
*    @Date    : 2020-12-26 19:17:06
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
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0, t; i < n; i++)
        cin >> t, s.insert(t);
    cout << s.size();
    return 0;
}
