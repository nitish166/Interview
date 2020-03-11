#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;
 
bool isEven(int n) 
{ 
  
    // n^1 is n+1, then even, else odd 
    if (n ^ 1 == n + 1) 
        return true; 
    else
        return false; 
} 
  
// Driver code 
int main() 
{ 
    int n = 5; 
    isEven(n)  
? cout << "Even" 
: cout << "Odd"; 
  
    return 0; 
} 