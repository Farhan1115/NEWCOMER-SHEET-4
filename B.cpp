#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline(cin,S);
    int x = S.size();
    for( int i=0; i<x; i++ )
    {
        if( S[i]=='\\' )
        {
            break;
        }
        cout<<S[i];
    }
    cout<<endl;
    return 0;
}
