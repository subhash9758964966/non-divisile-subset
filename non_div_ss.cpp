#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];int i;
    int b[k];
    fill(b, b + k, 0);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    int r=a[i]%k;
    {
     b[r]++;
    }
    }
    int s=0;
    for(i=0;i<=k/2;i++)
    {
        if(i==0)
        {
            if(b[0]>0)
            {
            s++;
            }
        }
        else 
        {
            if(b[i]>=b[k-i])
        {
            s=s+b[i];
        }
        else
        {
          s=s+b[k-i];
        }
    
        }
    }
    if(k%2==0)
    {
        s=s-b[k/2]+1;
    }
  cout<<s;

    return 0;
}

