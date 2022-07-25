#include<iostream>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    int j=0;
    while(k<n)
    {
        if(a[k] == a[k+1])
        {
            k++;
        }
        else
        {
            break;
        }
    }
    int z=0;
    for(int i=1; i<=k; i++)
    {
        if(a[i]==0)
        {
            z++;
        }
    }
    cout<<k-z<<endl;
    return 0;
}