#include <iostream>
using namespace std;

//do remember to do quicksort(x-1),  quicksort(x+1) other wire it stucks in endless loop

int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low;

    for(int j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            swap(arr[i],arr[j]);
            i++;
        }
    }

    swap(arr[i],arr[high]);
    cout<<low<<" "<<high<<endl;
    return i;

}

void quicksort(int arr[],int low, int high)
{
    if(low<high)
    {
        int x=partition(arr,low,high);
        quicksort(arr,low,x-1);
        quicksort(arr,x+1,high);
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
   
    quicksort(arr,0,n-1);
    
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}