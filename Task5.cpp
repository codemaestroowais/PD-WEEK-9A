#include<iostream>
using namespace std;
int commanCharacter(string s1, string s2);
main()
{
    string s1;
    cout<<"Enter the first string: ";
    cin>>s1;
    string s2;
    cout<<"Enter the second string: ";
    cin>>s2;
    cout<<"Number of comman characters: "<<commanCharacter(s1,s2);
}
int commanCharacter(string s1, string s2)
{
    int comman=0;
    int f=0;
    for(int l=0; s1[l] && s2[l]!='\0'; l++)
    {
        for(int l2=f; s1[l2]!='\0'; l2++)
        {
            if(s1[l]==s2[l2])
            {
                comman=comman+1;
                f=f+1;
                break;
            }
        }
    }
    return comman;
}