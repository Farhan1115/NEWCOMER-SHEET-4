#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T1, k=1;
    cin>>T1;
    while(k<=T1)
    {
        string S, T;
        cin>>S>>T;
        int i, x, y, j;
        x = S.size();
        y = T.size();
        if( x>y )
        {
            for( i=0; i<y; i++ )
            {
                cout<<S[i]<<T[i];
            }
            for( i=y; i<x; i++ )
            {
                cout<<S[i];
            }
        }
        else
        {
            for( i=0; i<x; i++ )
            {
                cout<<S[i]<<T[i];
            }
            for( i=x; i<y; i++ )
            {
                cout<<T[i];
            }
        }
        cout<<endl;
        k++;
    }
    return 0;
}
