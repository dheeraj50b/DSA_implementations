#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int bin_search(int arr[],int start,int end,int n)
{
    if(start>end)
    {
        return 0;
    }
    int m=(start+end)/2;
    if(n<arr[m])
    {
        bin_search(arr,start,m-1,n);
    }
    else if(n>arr[m])
    {
        bin_search(arr,m + 1,end,n);
    }
    else
    {
        return m;
    }

    
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // binary search differes from binary search tree and binary tree
    // just divide and conquer method
    // in binary tree every node has 2 children except tail
    // binary search tree is binary tree with left node less than root node and right rode greater than child node but not parent nodes.
    // half interval search

    // iterative
    int n;
    cin >> n;
    int arr[n];
    int p;
    cin >> p;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // bubble sort
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = 1; j < (n - i); j++)
        {
            if (arr[j] < arr[j - 1])
            {
                temp++;
                swap(arr[j], arr[j - 1]);
            }
        }
        if (temp == 0)
        {
            break;
        }
    }

   bin_search(arr,0,n-1,p);

    return 0;
}
