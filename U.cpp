#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin>>S;
    int i, j, x;
    int A[5] = {0};
    x = S.size();
    for( i=0; i<x; i++ )
    {
        if( S[i]=='E' || S[i]=='e' )
        {
            A[0] +=1;
        }
        if( S[i]=='G' || S[i]=='g' )
        {
            A[1] +=1;
        }
        if( S[i]=='Y' || S[i]=='y' )
        {
            A[2] +=1;
        }
        if( S[i]=='P' || S[i]=='p' )
        {
            A[3] +=1;
        }
        if( S[i]=='T' || S[i]=='t' )
        {
            A[4] +=1;
        }
    }
    int Min = INT_MAX;
    for( i=0; i<5; i++ )
    {
        if( Min>A[i] )
            Min = A[i];
    }
    cout<<Min<<endl;
    return 0;
}
