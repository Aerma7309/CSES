/*
*    @Date    : 2020-12-25 09:48:22
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

int cnt = 0, bsize = 8;
int const done = (1 << bsize) - 1;
vector<vector<char>> board(8, vector<char>(8));
void solve(int lmask, int rmask, int bmask, int row)
{
    if (bmask == done)
    {
        cnt++;
        return;
    }
    if (row >= bsize)
        return;
    int can_place = ~(lmask | bmask | rmask);
    for (int col = 0; col < bsize; col++)
        if (can_place & (1 << col) and board[row][col] == '.')
            solve((lmask | (1 << col)) << 1, (rmask | (1 << col)) >> 1, bmask | (1 << col), row + 1);
}

signed main()
{

    for (auto &i : board)
        for (auto &j : i)
            cin >> j;
    solve(0, 0, 0, 0);
    cout << cnt;
    return 0;
}