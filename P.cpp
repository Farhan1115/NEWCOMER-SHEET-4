#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline( cin, S );
    int i, Count=0;
    for( i=0; i<=S.size(); i++ )
    {
        if( S[i]==' ' || S[i]=='!' || S[i]=='.' || S[i]=='?' || S[i]==',' || S[i]=='\0' )
            {
                if( ( S[i-1]>=65 && S[i-1]<=90 ) || ( S[i-1]>=97 && S[i-1]<=122 ) )
                {
                    Count++;
                    //cout<<S[i-1]<<endl;
                }
            }
    }
    cout<<Count<<endl;
    return 0;
}
