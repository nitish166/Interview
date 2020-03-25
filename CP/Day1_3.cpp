#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,p,x;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>p>>x;
        ll ans=0,r=b,t,t1;
        for(int i=p-1; i; i--)
        {
            if(i<=x)
            {
                t=(i-r+p)%p,t1=(x-i)/(p-1);
                ans+=t1/p+(t1%p>=t);
            }
        r=r*a%p;
        }
        cout<<ans<<endl;
    }
    
}
 