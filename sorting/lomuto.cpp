#include <iostream>
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

   //use same algo which was used to shift zeroes to end
    int j=0;
    int pivot=arr[n-1];
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<pivot)
        {
            swap(arr[i],arr[j]);
            j++;
        }

    }

    swap(arr[j],arr[n-1]);

    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}