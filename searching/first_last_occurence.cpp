#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int bin_search(int arr[], int start, int end, int n)
{
    if (start > end)
    {
        return -1;
    }
    int m = (start + end) / 2;
    if (n < arr[m])
    {
       return bin_search(arr, start, m - 1, n);
    }
    else if (n > arr[m])
    {
        return bin_search(arr, m + 1, end, n);
    }
    else
    {
        if(m!=0)
        {
            if(arr[m]==arr[m-1])
            {
               return bin_search(arr, start, m - 1, n);
            }
           
        }
        return m;
        
        
    }
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

   
    int n;
    cin >> n;
    int arr[n];
    int p;
    cin >> p;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // bubble sort
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = 1; j < (n - i); j++)
        {
            if (arr[j] < arr[j - 1])
            {
                temp++;
                swap(arr[j], arr[j - 1]);
            }
        }
        if (temp == 0)
        {
            break;
        }
    }

    cout<<bin_search(arr, 0, n - 1, p);

    return 0;
}
