#include <iostream>
using namespace std;

void combine(int arr[],int l,int m,int h)
{
    int n1=(m-l+1);
    int n2=(h-m);
   
    int left[n1];int right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[i+l];
    }
    for(int i=m+1;i<=h;i++)
    {
        right[i-m-1]=arr[i];
       
    }


    int i=0;
    int j=0;
    int ind=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[ind]=left[i];
            i++;
            ind++;
        }
        else
        {
            arr[ind] = right[j];
            j++;
            ind++;
        }
    }

    while(i<n1)
    {
        arr[ind]=left[i];
        ind++;
        i++;
    }
    while (j < n2)
    {
        arr[ind] =right[j];
         ind++;
         j++;
    }

}

void merge(int arr[],int l,int h)
{
    if(l<h)
    {
        int m=(l+h)/2;
        merge(arr,l,m);
        merge(arr,m+1,h);
        combine(arr,l,m,h);
    }

}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

   //merge sort uses divide and conquer method
   //just as to find max sub array algo
   //last 2 elements when l==h we sort two elements and return the access
   

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

   merge(arr,0,n-1);
   for(auto i:arr)
   {
       cout<<i<<" ";
   }
}