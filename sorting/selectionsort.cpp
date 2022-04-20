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

    int index=n-1;

    for (int i = 0; i < n-1; i++)
    {
        int temp=arr[0];
        int ind=0;
        for (int j = 1; j < n - i; j++)
        {
           if(arr[j]>temp)
           {
               ind =j;
               temp=arr[j];
           }
        }
        swap(arr[ind],arr[index]);
        index--;
        
    }

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}