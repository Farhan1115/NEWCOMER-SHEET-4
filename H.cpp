#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, T, j, x, F;
    string S;
    cin>>T;
    for( j=1; j<=T; j++ )
    {
        F=0;
        cin>>S;
        x = S.size();
        for( i=0; i<x-2; i++ )
        {
            //cout<<"I = "<<i<<endl;
            if( ( S[i]=='1' && S[i+1]=='0' && S[i+2]=='1' ) || ( S[i]=='0' && S[i+1]=='1' && S[i+2]=='0' ) )
            {
                F=1;
                break;
            }
        }
        //cout<<"F = "<<F<<endl;
        if( F==1 )
            cout<<"Good"<<endl;
        else
            cout<<"Bad"<<endl;
    }
    return 0;
}
