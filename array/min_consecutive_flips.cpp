#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[0] && arr[i]!=arr[i-1])
        {
            ans++;
        }
    }

    if(arr[0]!=arr[n-1])
    {
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
