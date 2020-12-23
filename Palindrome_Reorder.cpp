/*
*    @Date    : 2020-12-16 20:21:45
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
    int cnt[26] = {}, single = -1, c = 0;
    string str, res = "";
    cin >> str;
    for (char ch : str)
        cnt[ch - 'A']++;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] & 1)
        {
            single = i;
            c++;
        }
        else
            for (int a = 0; a < (cnt[i] / 2); a++)
                res.push_back('A' + i);
    }

    if (c > 1)
        cout << "NO SOLUTION";
    else
    {
        cout << res;
        if (single != -1)
        {
            for (int a = 0; a < cnt[single]; a++)
                cout << (char)('A' + single);
        }
        reverse(res.begin(), res.end());
        cout << res;
    }


    return 0;
}
