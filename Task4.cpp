#include<iostream>
using namespace std;
void evenOddd (int n, int arr[], int time);
main()
{
    int n;
    int time;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter Element "<<(i+1)<<": ";
        cin>>arr[i];
    }
    cout<<"Enter number of times even-odd transformation need to be done: ";
    cin>>time;
    evenOddd (n, arr, time);
}
void evenOddd (int n, int arr[], int time)
{
    cout<<"[";
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2==0)
            {
                int even=arr[i]+(time*(-2));
                cout<<even;
            }
            else if(arr[i]%2!=0)
            {
                int odd=arr[i]+(time*2);
                cout<<odd;
            }
            if(i<n-1)
            {
                cout<<", ";
            }
        }
    cout<<"]";
}