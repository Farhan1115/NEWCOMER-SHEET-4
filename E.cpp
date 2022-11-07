#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin>>S;
    int i, Sum=0, x = S.size();
    for( i=0; i<x; i++ )
    {
        Sum = Sum + (S[i] - 48);
    }
    cout<<Sum<<endl;
    return 0;
}
