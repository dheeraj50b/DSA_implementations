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

    //unlike lomuto use both ends of array
    int s = -1;
    int e=n;
    int pivot = arr[0];
    
    while(1)
    {
        do{
            s++;
        }
        while(arr[s]<pivot);

        do{
            e--;
        }
        while(arr[e]>=pivot);

        if(s>=e)
        {
            break;
        }
        swap(arr[s], arr[e]);
    }
    
    


    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}