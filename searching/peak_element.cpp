#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int peak(int arr[], int start, int end, int size)
{
    if (start > end)
    {
        return -1;
    }
    int m = (start + end) / 2;
    if ((m + 1 > size || arr[m] >= arr[m + 1]) && (m - 1 < 0 || arr[m] >= arr[m - 1]))
    {
        return m;
        
    }
    else if(m>0 && arr[m-1]>arr[m])
    {
        
        return peak(arr, start, m -1,size);
    }
    else
    {
        return peak(arr, m+1, end, size);
    }
   
}

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

    cout << (peak(arr,0,n-1,n-1));

    return 0;
}
