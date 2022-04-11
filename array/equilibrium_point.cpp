#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

   //Good idea is not to store prefix and suffix sum
    //use sum of all elements and prefix sum only
    //dont calculate prefix sum beforehand

    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    int pre_sum=0;

    for(int i=0;i<n;i++)
    {
        if(pre_sum == sum-arr[i])
        {
            cout<<"equilibrium point is "<<i<<endl;
            break;
        }
        pre_sum+=arr[i];
        sum-=arr[i];
    }

    return 0;
}
