/*
*    @Date    : 2020-12-23 21:28:47
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
    set<int> s1, s2;
    int sum = (n * (n + 1)) / 2;
    if (sum & 1 or n % 4 == 1 or n % 4 == 2)
        cout << "NO";
    else
    {
        if (n % 4 == 0)
        {
            int sz = n / 4;
            for (int i = 1; i <= sz; i++)
                s1.insert(i);
            for (int i = sz + 1; i <= 3 * sz; i++)
                s2.insert(i);
            for (int i = 3 * sz + 1; i <= n; i++)
                s1.insert(i);
        }
        else
        {
            s1.insert(1);
            s1.insert(2);
            s2.insert(3);
            int sz = (n - 3) / 4;
            for (int i = 4; i <= sz + 3; i++)
                s1.insert(i);
            for (int i = sz + 4; i <= 3 * sz + 3; i++)
                s2.insert(i);
            for (int i = 3 * sz + 4; i <= n; i++)
                s1.insert(i);
        }
        cout << "YES\n"
             << s1.size() << "\n";
        for (auto i : s1)
            cout << i << " ";
        cout << '\n'
             << s2.size() << "\n";
        for (auto i : s2)
            cout << i << " ";
    }

    return 0;
}
// 1 2 3 4