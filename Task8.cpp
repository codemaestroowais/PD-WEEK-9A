#include<iostream>
using namespace std;
string keys(string n, string a);
main()
{
    string n;
    string a;
    cout<<"Enter the correct phrase: ";
    getline(cin, n);
    cout<<"Enter what you actually typed: ";
    getline(cin, a);
    cout<<"Broken keys: ";
    cout<<keys(n, a);
}
string keys(string n, string a)
{
    string output="";
    for(int i=0; i<n.length(); i++)
    {   
        char c=n[i];
        char typed=a[i];
        if(c!=typed && output.find(c)==string::npos)
        {    
            output=output+c;
        }        
    }
    return output;
}