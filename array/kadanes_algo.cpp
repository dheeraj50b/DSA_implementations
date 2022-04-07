#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // max subarray sum
    //subarray means continuous elements
    //all integers

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = arr[0];
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]<(arr[i]+arr[i-1]))
        {
            arr[i]=arr[i]+arr[i-1];
            
        }
        ans = max(ans, arr[i]);
    }

    //max continuous value


    cout << ans << endl;
    return 0;
}


