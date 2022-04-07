#include <iostream>

using namespace std;



int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt", "w", stdout);

    //this is to find all prime numbers less than n
    int n;
    cin>>n;

    bool arr[n] = {true};

   for(int i=2;i<n;i++)
   {
       if(arr[i]==true)
       {
           for(int j=2*i;j<n;j++)
           {
               arr[j]=false;
           }
       }


   }

    for(int i=2;i<n;i++)
    {
        if(arr[i])
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    

    
}