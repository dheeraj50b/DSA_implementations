#include <iostream>
using namespace std;

// do remember to do quicksort(x-1),  quicksort(x+1) other wire it stucks in endless loop

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }

    swap(arr[i], arr[high]);
   
    return i;
}

int quicksort(int arr[], int low, int high,int k)
{
    while(low < high)
    {
        int x = partition(arr, low, high);
        if(x==k-1)
        {
            return arr[x];
        }
        else if(x<k-1)
        {
            low=x+1;
        }
        else
        {
            high=x-1;
        }
    }

    return -1;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n,k;
    cin >> n>>k;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<quicksort(arr, 0, n - 1,k);

}