/*
*    @Date    : 2020-12-12 18:29:05
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
    if (n == 2 or n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    for (int i = 2; i <= n; i += 2)
        cout << i << " ";
    for (int i = 1; i <= n; i += 2)
        cout << i << " ";
    
    return 0;
}
