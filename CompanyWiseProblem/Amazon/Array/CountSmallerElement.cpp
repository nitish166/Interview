class Solution{
public:	
	vector<int> constructLowerArray(int *arr, int n) {
	    // code here
	    
	    int count[n];
	    for(int i=0; i<n; i++)
	    {
	        count[i]=0;
	    }
	    
	    for(int i=0; i<n; i++)
	    {
	        for(int j=i+1; j<n; j++)
	        {
	            if(arr[j]<arr[i])
	            {
	                count[i]++;
	            }
	        }
	        
	    }
	    vector<int> res;
	    for(int i=0; i<n; i++)
	    {
	        res.push_back(count[i]);
	    }
	    return res;
	}
};

//Another Approch

class Solution{
public:	
	vector<int> constructLowerArray(int *arr, int n) {
	    // code here
	    vector<int> res;
	    int count;
	    for(int i=0; i<n; i++)
	    {
	        count =0;
	        for(int j=n-1; j>i; j--)
	        {
	            if(arr[j]<arr[i])
	            {
	                ++count;
	            }
	        }
	        res.push_back(count);
	    }
	    return res;
	    
	}
};