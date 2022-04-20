#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(arr[j+1],arr[j]);
                count++;
            }
        }
        if(count==0)
        {
            break;
        }
    }

    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}