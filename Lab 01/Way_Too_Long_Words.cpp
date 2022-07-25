#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int size= s.size();
        if(size>10)
        {
            cout<<s[0]<<size-2<<s[size-1]<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
    }
    return 0;
}