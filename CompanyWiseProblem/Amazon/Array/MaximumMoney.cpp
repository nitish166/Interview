#include <cmath>
class Solution {
  public:
    int maximizeMoney(int N , int K) {
        // code here
        int ans =0;
        if(N%2==0)
        {
            ans = N/2;
            return ans*K;
        }
        else
        {
            ans = ceil(N/2);
        }
        ans = ans+1;
        return K*ans;
    }
};