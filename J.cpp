#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, x, Count=0;
    string S;
    cin>>S;
    x = S.size();
    sort( S.begin(), S.end() );
    for( i=0; i<x; i++ )
    {
        Count=1;
        //cout<<"I="<<i<<endl;
        for( int j=i+1; j<x; j++ )
        {
            if( S[i]==S[j] )
            {
                Count++;
                i++;
            }
        }
        cout<<S[i]<<" : "<<Count<<endl;
    }
    return 0;
}
