#include<iostream>
#include<string>
using namespace std;
bool stringCalculation(string input);
main()
{
    string input;
    cout<<"Enter a string: ";
    cin>>input;
    cout<<stringCalculation(input);
}
bool stringCalculation(string input)
{
    if(input.length()%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}