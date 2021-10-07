#include <iostream>
#include <bits/stdc++.h>
using namesapace std;

int main()
{
    int a,n ;
    cout<<"enter the no of elements : ";
    cin>>n;
    
    int a[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    
    int maxno = INT_MIN ;

    for(i=0 ; i<n ; i++)
    {
        maxno = max(INT_MIN , a[i]);
    }
    cout<<maxno;
    return 0;
}

