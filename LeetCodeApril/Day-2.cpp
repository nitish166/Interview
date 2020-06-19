
// using set method
class Solution {
public:
    bool isHappy(int n) {
        
        set<int> myset;
        int val ;
        int index;
        while(1)
        {
            val=0;
            while(n)
            {
                index = n%10;
                val +=index*index;
                n /=10;
            }
            
            if(val==1)
            {
                return true;
            }
            else if(myset.find(val) !=myset.end())
            {
                return false;
            }
            myset.insert(val);
            n=val;
        }
        
    }
};


// using recursion Method

class Solution {
public:
    bool isHappy(int n) {
        
        if(n==1 || n==7)
        {
            return true;
        }
        else if(n<10) return false;
        int sum =0;
        while(n!=0)
        {
            int r = n%10;
            sum += r*r;
            n /=10;
        }
        
        return isHappy(sum);
        
    }
};

// using Floyd cycle detection method

class Solution {
public:
    
    
    int digitSquareSum(int n)
    {
        int sum=0, tmp;
        while(n)
        {
            tmp = n%10;
            sum +=tmp*tmp;
            n /=10;
        }
        return sum;
    }
    
    
    bool isHappy(int n) {
        
        int slow, fast;
        slow=fast=n;
        
        do{
            
            slow = digitSquareSum(slow);
            fast = digitSquareSum(digitSquareSum(fast));
            
            
            if(fast==1)
            {
                return 1;
            }
            
        }while(slow!=fast);
        return false;
        
    }
};