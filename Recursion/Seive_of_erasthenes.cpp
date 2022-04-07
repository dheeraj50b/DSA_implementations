#include <iostream>

using namespace std;



int main()
{
    freopen("input.txt","r",stdin);
    freopen("out.txt", "w",stdout);

    //this is to find all prime numbers less than n
    int n;
    cin>>n;

    bool arr[n];

    for(int i=0;i<n;i++)
    {
        arr[i]=true;
    }

   for(int i=2;i<n;i++)
   {
       if(arr[i]==true)
       {
           for(int j=2*i;j<n;j=j+i)
           {
               arr[j]=false;
           }
       }


   }

    for(int i=2;i<n;i++)
    {
        if(arr[i]==true)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    

    
}