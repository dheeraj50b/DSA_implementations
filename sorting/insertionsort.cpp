#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

//maintain sort

//simpler way after seeing sol
    // for (int i = 1; i < n; i++)
    // {
    //     int key = arr[i];
    //     int j = i - 1;
    //     while (j >= 0 && arr[j] > key)
    //     {
    //         arr[j + 1] = arr[j];
    //         j--;
    //     }
    //     arr[j + 1] = key;
    // }
    
    
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int index = n - 1;

    for (int i = 1; i < n; i++)
    {
        int ind=i-1;
        int element=arr[i];
        if(arr[i]>=arr[i-1])
        {
            continue;
        }
        else
        {
            while(arr[ind]>=arr[i] && ind>=0)
            {
                
                if(ind==0)
                {
                    break;
                }
                ind--;
            }

            for(int j=i;j>ind;j--)
            {
                arr[j]=arr[j-1];
            }
            arr[ind]=element;
        }
    }

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}