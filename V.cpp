#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin>>S;
    int i, j, x;
    x = S.size();
    for( i=0; i<x; i++ )
    {
        if( S[i]=='E' && S[i+1]=='G' && S[i+2]=='Y'&& S[i+3]=='P' && S[i+4]=='T' )
        {
            cout<<" ";
            i+=4;
        }
        else
            cout<<S[i];
    }
    return 0;
}
