#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // not forget to write the edge case at bottom

    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    int cal=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            cal++;
        }
        else
        {
            ans=max(ans,cal);
            cal=0;
        }
    }

    ans=max(ans,cal);
    
    cout<<ans<<endl;
    return 0;
}