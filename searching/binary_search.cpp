#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    //binary search differes from binary search tree and binary tree
    //just divide and conquer method
    //in binary tree every node has 2 children except tail
    //binary search tree is binary tree with left node less than root node and right rode greater than child node but not parent nodes.
    //half interval search

    //iterative
    int n;
    cin>>n;
    int arr[n];
    int p;
    cin>>p;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //bubble sort
    for(int i=0;i<n;i++)
    {
        int temp=0;
        for(int j=1;j<(n-i);j++)
        {
            if(arr[j]<arr[j-1])
            {
                temp++;
                swap(arr[j],arr[j-1]);
            }
        }
        if(temp==0)
        {
            break;
        }
        
    }

    int start=0;
    int end=n-1;

    while(start<=end)
    {
        int m=(start+end)/2;

        if(arr[m]<p)
        {
            start=m+1;
        }
        else if(arr[m]>p)
        {
            end=m-1;
        }
        else
        {
            cout<<"index is "<<m<<endl;
            break;
        }


    }

    return 0;
}
