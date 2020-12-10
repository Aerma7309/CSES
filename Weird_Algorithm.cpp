/*
*    @Date    : 2020-11-20 19:15:37
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
    cout << n << " ";
    while (n != 1)
    {
        if (n & 1)
            n = n * 3 + 1;
        else
            n /= 2;
        cout << n << " ";
    }
    return 0;
}
