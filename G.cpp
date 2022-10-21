#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    int x, i, y;
    getline(cin, S);
    x = S.size();
    for( i=0; i<x; i++ )
    {
        y = S[i];
        if( y>=65 && y<=90 )
        {
            S[i] = S[i] + 32;
            cout<<S[i];
        }
        else if( S[i]==',' )
        {
            cout<<" ";
        }
        else if( y>=97 && y<=122 )
        {
            S[i] = S[i] - 32;
            cout<<S[i];
        }
    }
    cout<<endl;
    return 0;
}
