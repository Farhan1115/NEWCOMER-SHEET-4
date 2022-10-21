#include<bits/stdc++.h>
using namespace std;

int main()
{
    string A, B;
    int i, x, y;
    cin>>A>>B;
    x = A.size();
    y = B.size();
    cout<<x<<" "<<y<<endl;;
    cout<<A<<B<<endl;
    cout<<B[0];
    for( i=1; i<x; i++ )
    {
        cout<<A[i];
    }
    cout<<" ";
    cout<<A[0];
    for( i=1; i<y; i++ )
    {
        cout<<B[i];
    }
    cout<<endl;


    return 0;
}
