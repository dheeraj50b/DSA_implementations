#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // this is to find all prime numbers less than n
    //mistake made was to comapre at i-1 and i+1 positions but compare at i

    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int front_maxi[n];
    int back_maxi[n];
    front_maxi[0]=arr[0];
    back_maxi[n-1]=arr[n-1];
    int ans=0;

    for(int i=1;i<n;i++)
    {
        front_maxi[i]=max(front_maxi[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--)
    {
        back_maxi[i]=max(arr[i],back_maxi[i+1]);
    }

    for(int i=1;i<n-1;i++)
    {
        // int temp=min(front_maxi[i-1],back_maxi[i+1]);
        int temp = min(front_maxi[i], back_maxi[i]);

        ans += (temp - arr[i]);
            cout<<(temp-arr[i])<<endl;
        
    }
   
    cout<<ans << endl;
    return 0;
}