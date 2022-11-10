#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, i, j, Count=0;
    string S;
    cin>>S;
    x = S.size();
    for( i=0, j=x-1; i<x ; i++, j-- )
    {
        if( S[i]==S[j] )
        {
            Count++;
        }
        else
            break;
    }
    if( Count==x )
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
