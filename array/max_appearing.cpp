#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    
    //range of numbers need to be small

    int n;
    cin >> n;
    int l[n];
    int r[n];

    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
    }

   vector <int> arr(1000,0);
    for(int i=0;i<n;i++)
    {
        arr[l[i]]++;
        arr[r[i]+1]--;
    }
    int ind=0;
    int maxi=arr[0];

    for(int i=1;i<1000;i++)
    {
        arr[i]=arr[i]+arr[i-1];
        if(arr[i]>maxi)
        {
            ind=i;
            maxi=arr[i];
        }
    }

    cout<<ind<<endl;

    

    return 0;
}
