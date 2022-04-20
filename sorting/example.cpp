#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(5,10);
    cout<<v[2];

    for(auto i:v)
    {
        cout<<i<<endl;
    }
    return 0;
}