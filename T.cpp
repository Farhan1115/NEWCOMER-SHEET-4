#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline( cin, S );
    int i, x, j;
    x = S.size();
    for( i=12; i<x; i++ )
    {
        if( S[i]=='u' && S[i+8]=='=' )
        {
            int m = i+9;
            //cout<<m<<endl;
            cout<<"username: ";
            for( j=m; j<x; j++ )
            {
                if( S[j]!='&' )
                {
                    cout<<S[j];
                }
                if( S[j]=='&' )
                {
                    break;
                }
            }
            cout<<endl;
            i=j+1;
        }

        if( S[i]=='p' && S[i+3]=='=' )
        {
            int m = i+4;
            //cout<<m<<endl;
            cout<<"pwd: ";
            for( j=m; j<x; j++ )
            {
                if( S[j]!='&' )
                {
                    cout<<S[j];
                }
                if( S[j]=='&' )
                {
                    break;
                }
            }
            cout<<endl;
            i=j+1;
        }

        if( S[i]=='p' && S[i+7]=='=' )
        {
            int m = i+8;
            //cout<<m<<endl;
            cout<<"profile: ";
            for( j=m; j<x; j++ )
            {
                if( S[j]!='&' )
                {
                    cout<<S[j];
                }
                if( S[j]=='&' )
                {
                    break;
                }
            }
            cout<<endl;
            i=j+1;
        }

        if( S[i]=='r' && S[i+4]=='=' )
        {
            int m = i+5;
            //cout<<m<<endl;
            cout<<"role: ";
            for( j=m; j<x; j++ )
            {
                if( S[j]!='&' )
                {
                    cout<<S[j];
                }
                if( S[j]=='&' )
                {
                    break;
                }
            }
            cout<<endl;
            i=j+1;
        }

        if( S[i]=='k' && S[i+3]=='=' )
        {
            int m = i+4;
            //cout<<m<<endl;
            cout<<"key: ";
            for( j=m; j<x; j++ )
            {
                if( S[j]!='&' )
                {
                    cout<<S[j];
                }
                if( S[j]=='&' )
                {
                    break;
                }
            }
            cout<<endl;
            i=j+1;
        }

    }
    return 0;
}
