#include <iostream>
#include <algorithm>

using namespace std;

//another method is to use (i+j)%n

int max_subarray(int a[],int n)
{
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]+arr[i-1]>arr[i])
        {
            arr[i]=arr[i]+arr[i-1];
        }


    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=max(ans,arr[i]);
    }
    return ans;

}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int arr[n];
    int sum=0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum+=arr[i];
    }

    int p=max_subarray(arr,n);
    for(int i=0;i<n;i++)
    {
        arr[i]*=-1;
    }
    int q=max_subarray(arr,n);

    int ans=0;
    ans=max(p,sum+q);
    cout<<ans<<endl;


    return 0;
}
