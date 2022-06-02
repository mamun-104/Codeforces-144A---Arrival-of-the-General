#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int large=0,large_i=0,small,small_i=0,total=0;

    for(i=0;i<n;i++)
    {
        if(a[i]>large){large=a[i];large_i=i;}
    }

    small=large;

    for(i=0;i<n;i++)
    {
        if(a[i]<=small){small=a[i];small_i=i;}
    }

    //cout<<large_i<<"----"<<small_i<<endl;



    if(large_i>small_i)
    {
        total=large_i+(n-1-small_i);
        total=total-1;

    }
    else
    {
        total=large_i+n-1-small_i;

    }



    cout<<total<<endl;



    return 0;
}
