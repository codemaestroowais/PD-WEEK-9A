#include<iostream>
using namespace std;
void PINConverter(string PIN);
main()
{
    string PIN;
    cout<<"Enter you PIN (4 digits): ";
    cin>>PIN;
    if(PIN[3])
    {
        PINConverter(PIN);
    }
    if(PIN.length()!=4)
    {
        cout<<"Invalid input.";
    }
}
void PINConverter(string PIN)
{
    int n=10;
    int f=0;
    string arr[n]={"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    for(int i=0;i<4;i++)
    {
        f=(PIN[i]-'0')+i+1;
        if(f>10)
        {
            f=f%10;
        }
 
        if(i+1==4)
        {
            cout<<arr[f-1];
        }
        else
        {
            cout<<arr[f-1]<<", ";
        }
    }
}