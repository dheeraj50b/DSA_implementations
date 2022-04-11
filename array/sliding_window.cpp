#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n,k;
    cin >>n>>k;
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans=0;
    for(int i=0;i<k;i++)
    {
        ans+=arr[i];
    }

    int temp = ans;
    for(int i=1;i<=n-k;i++)
    {
        
        temp-=arr[i-1];
        temp+=arr[i+k-1];
        ans=max(ans,temp);
    }

    cout<<ans<<endl;

    return 0;
}
