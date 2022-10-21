#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, i, x;
    string S;
    cin>>T;
    for( i=1; i<=T; i++ )
    {
        cin>>S;
        x = S.size();
        if( x<=10 )
        {
            cout<<S<<endl;
        }
        else
        {
            cout<<S[0]<<x-2<<S[x-1]<<endl;
        }
    }
    return 0;
}
