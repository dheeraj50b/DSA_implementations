#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ind=0;
    int count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[ind])
        {
            count++;
        }
        else
        {
            if(count>1)
            {
                count--;
            }
            else
            {
                count=1;
            }
        }

    }

    

    return 0;
}
