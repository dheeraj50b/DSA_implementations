#include <iostream>
#include <algorithm>

using namespace std;

int net(int arr[],int l,int m,int h)
{
    int lh=INT_MIN;
    int rh = INT_MIN;
    int sum=0;
    for(int i=l;i<m;i++)
    {
        sum+=arr[i];
        lh=max(lh,sum);
    }
sum=0;
    for(int i=m+1;i<h;i++)
    {
        sum+=arr[i];
        rh=max(rh,sum);
    }

    return lh;
}

int kad_rec(int arr[],int l, int h)
{

    if(l==h)
    {
        return arr[l];
    }
    int m=(l+h)/2;

    return max(kad_rec(arr, l, m), kad_rec(arr, m+1, h), net(arr, l, m,h));
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // max subarray sum
    // subarray means continuous elements
    // all integers

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout<<kad_rec(arr,0,n-1);
    return 0;
}
