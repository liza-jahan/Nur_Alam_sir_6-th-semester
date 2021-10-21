#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int  t,i,j;
     cin>>t;
    while(t--)
    {
      long long int n,x=0;
        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++)
          {

           cin>>a[i];
          }
        sort(a,a+n);
        for(i=0;i<n-1;i++)
        {
            if(abs(a[i]-a[i+1])>1)
            {
                x=1;
                break;
            }
        }
        if(x==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
