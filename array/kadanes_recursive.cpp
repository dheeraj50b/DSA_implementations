// #include <iostream>
// #include <algorithm>

// using namespace std;

// int net(int arr[],int l,int m,int h)
// {

//     int lh=INT_MIN;
//     int rh = INT_MIN;
//     int sum=0;
//     for(int i=l;i<m;i++)
//     {
//         sum+=arr[i];
//         lh=max(lh,sum);
//     }
// sum=0;
//     for(int i=m+1;i<h;i++)
//     {
//         sum+=arr[i];
//         rh=max(rh,sum);
//     }

//     return max(lh+rh,lh,rh);
// }

// int kad_rec(int arr[],int l, int h)
// {

//     if(l==h)
//     {
//         return arr[l];
//     }
//     int m=(l+h)/2;

//     return max(kad_rec(arr, l, m), kad_rec(arr, m+1, h), net(arr, l, m,h));
// }

// int main()
// {
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);

//     // max subarray sum
//     // subarray means continuous elements
//     // all integers

//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
    
//     cout<<kad_rec(arr,0,n-1);
//     return 0;
// }

#include <limits.h>
#include <stdio.h>
#include <iostream>

using namespace std;
// A utility function to find maximum of two integers
int max(int a, int b) { return (a > b) ? a : b; }

// A utility function to find maximum of three integers
int max(int a, int b, int c) { return max(max(a, b), c); }

// Find the maximum possible sum in arr[] auch that arr[m]
// is part of it
int maxCrossingSum(int arr[], int l, int m, int h)
{
    // Include elements on left of mid.
    cout<<l<<" "<<m<<" "<<h<<endl;
    int sum = 0;
    int left_sum = INT_MIN;
    for (int i = m; i >= l; i--)
    {
        sum = sum + arr[i];
        if (sum > left_sum)
            left_sum = sum;
    }

    // Include elements on right of mid
    sum = 0;
    int right_sum = INT_MIN;
    for (int i = m + 1; i <= h; i++)
    {
        sum = sum + arr[i];
        if (sum > right_sum)
            right_sum = sum;
    }

    // Return sum of elements on left and right of mid
    // returning only left_sum + right_sum will fail for
    // [-2, 1]
    return max(left_sum + right_sum, left_sum, right_sum);
}

// Returns sum of maximum sum subarray in aa[l..h]
int maxSubArraySum(int arr[], int l, int h)
{
    //cout<<l<<" "<<h<<endl;
    // Base Case: Only one element
    if (l == h)
        return arr[l];

    // Find middle point
    int m = (l + h) / 2;

    /* Return maximum of following three possible cases
            a) Maximum subarray sum in left half
            b) Maximum subarray sum in right half
            c) Maximum subarray sum such that the subarray
       crosses the midpoint */
    return max(maxSubArraySum(arr, l, m),
               maxSubArraySum(arr, m + 1, h),
               maxCrossingSum(arr, l, m, h));
}

/*Driver program to test maxSubArraySum*/
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int arr[] = {2, 3, 4, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_sum = maxSubArraySum(arr, 0, n - 1);
    printf("Maximum contiguous sum is %d\n", max_sum);
    getchar();
    return 0;
}