#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n1,n2;
    cin >> n1>>n2;
    int left[n1],right[n2];
    for (int i = 0; i < n1; i++)
    {
        cin >> left[i];
    }

    for (int i = 0; i < n2; i++)
    {
        cin >> right[i];
    }
    
    int i=0;
    int j=0;



    while(i<n1 && j<n2)
    {
        if(left[i]<right[j])
        {
            i++;
        }
        else if(right[j]<left[i])
        {
            j++;
        }
        else
        {
            cout<<left[i]<<" ";
            int store=left[i];
            while(i<n1 && left[i]==store)
            {
                i++;
            }
            while (j < n2 && right[j] == store)
            {
                j++;
            }
        }
    }


}