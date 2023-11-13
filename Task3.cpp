#include<iostream>
using namespace std;
bool same(int n, string arr[]);
main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    string arr[n];
    for(int i=1; i<(n+1); i++)
    {
        cout<<"Enter Element "<<i<<": ";
        cin>>arr[i-1];
    }
    cout<<same(n, arr);
}
bool same(int n, string arr[])
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==arr[i+1])
        {
            return true;
        }
    }
    return false;
}