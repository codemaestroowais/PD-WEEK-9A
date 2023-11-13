#include<iostream>
using namespace std;
void sgmentWord(int n, string word[]);
main()
{
    int n;
    cout<<"Enter the number of words: ";
    cin>>n;
    string word[n];
    cout<<"Enter the words, one by one: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>word[i];
    }
    sgmentWord(n, word);
}
void sgmentWord(int n, string word[])
{
    int count[n];
    string result="";
    for(int i=0;i<n;i++)
    {
        string word2=word[i];
        count[i]=0;
        int j=0;
        while(word2[j]!='\0')
        {
            if(word2[j]=='k' || word2[j]=='v' ||word2[j]=='w' ||word2[j]=='x' ||word2[j]=='m' )
            {
                word[i]="";
                count[i]=0;
                break;
            }
            count[i]=count[i]+1;
            j++;
        }
    }
    for(int k=0;k<n-1;k++)
    {
        if(count[k+1]>count[k])
        {
            result=word[k+1];
        }
    }
    cout << "Longest 7-segment word: " << result;
}