/*
*    @Date    : 2020-12-26 00:40:02
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

vector<string> ans;

void permute(string s, int b, int e)
{
    if (b == e)
        ans.push_back(s);
    else
    {
        for (int i = b; i < e; i++)
        {
            if (i != b and s[i] == s[b])
                continue;
            else
            {
                swap(s[i], s[b]);
                permute(s, b + 1, e);
            }
        }
    }
}

signed main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    permute(s, 0, s.size());
    cout << ans.size() << '\n';
    for (auto &i : ans)
        cout << i << '\n';
    return 0;
}
