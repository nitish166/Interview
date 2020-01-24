#include <bits/stdc++.h>
using namespace std;

void checkPrime(int n)
{
    int* prime = new int[n+1];
    //base case
    prime[0]=false;
    prime[1]=false;
    // make all numbers in array are prime number
    for(int i=2;i<=n;i++)
    {
      prime[i]=true;
    }
    for(int divisor=2; divisor*divisor<=n; divisor++)
    {
        if(prime[divisor])
        {
          for(int i=2*divisor; i<=n; i=i+divisor)
          {
            prime[i]=false;
          }
        }
    }
    for(int i=2;i<=n;i++)
    {
      if(prime[i])
      {
        cout<<i<<" ";
      }
    }
    cout<<endl;
}


int main()
{
    int n;
    cin>>n;
    checkPrime(n);
    return 0;
}
