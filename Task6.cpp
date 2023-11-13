#include<iostream>
using namespace std;
int coloringTime(string arr[], int n);
main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter Element "<<(i+1)<<": ";
        cin>>arr[i];
    }
    cout<<"Time to color: "<<coloringTime(arr, n)<<" seconds";
}
int coloringTime(string arr[], int n)
{
    int c;
    int time=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=arr[i-1])
        {
            time=time+1;
        }
    }
    time=time+(n*2)-1;
    return time;
}