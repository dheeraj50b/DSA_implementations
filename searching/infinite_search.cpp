
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int square_root(int num, int start, int end, int ans)
{
    if (start > end)
    {
        return ans;
    }
    int m = (start + end) / 2;
    if (m * m < num)
    {
        ans = m;
        return square_root(num, m + 1, end, ans);
    }
    else if (m * m > num)
    {
        return square_root(num, start, m - 1, ans);
    }
    else
    {
        return m;
    }
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int p;
    cin >> p;

    int ans = 1;

    cout << (square_root(p, 1, p, ans));

    return 0;
}
