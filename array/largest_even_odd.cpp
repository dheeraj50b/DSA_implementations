#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ans=0;
    int max_val=1;

    for(int i=1;i<n;i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0)||(arr[i]%2!=0 && arr[i-1]%2==0))
        {
            max_val++;
            ans = max(ans, max_val);
        }
        else
        {
            
            max_val=1;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}
