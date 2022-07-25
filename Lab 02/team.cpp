#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int co=0;
    for(int i=1; i<=n; i++)
    {
        int a, b, c;
        cin>>a>>b>>c;
        if((a+b+c)>=2)
        {
            co++;
        }
    }
    cout<<co<<endl;
    return 0;
}