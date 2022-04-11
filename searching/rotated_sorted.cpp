
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, p;
    cin >> n >> p;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0;
    int end = n - 1;
    int flag = 1;
    while (start <= end)
    {

        int m = (start + end) / 2;

        if (arr[m] == p)
        {
            cout << m << endl;
            flag = 0;
            break;
        }

        if (arr[m] > arr[0])
        {
            if (p < arr[m] && p >= arr[start])
            {
                end = m - 1;
            }
            else
            {
                start = m + 1;
            }
        }

        else if (arr[m] < arr[0])
        {
            if (p > arr[m] && p <= arr[end])
            {
                start = m + 1;
            }
            else
            {
                end = m - 1;
            }
        }
    }

    if (flag)
    {
        cout << "-1" << endl;
    }

    return 0;
}
