#include <iostream>
using namespace std;

// do remember to do quicksort(x-1),  quicksort(x+1) other wire it stucks in endless loop

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ind1=0;
    int ind2=n-1;
    int l=0;
    int h=n-1;

    while(1)
    {
        do{
            l++;
            cout<<"low "<<l<<" "<<arr[l]<<endl;
        }
        while(arr[l]!=0);

        do{
            h--;
            cout << "high " << l << " " << arr[h] << endl;
        }
        while(arr[h]!=2);

      

        if(l<=(n-1))
        {
            swap(arr[l], arr[ind1]);
            ind1++;
        }
        if(h>=0)
        {
            swap(arr[h], arr[ind2]);
            ind2--;
        }

     
        
    }

    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}