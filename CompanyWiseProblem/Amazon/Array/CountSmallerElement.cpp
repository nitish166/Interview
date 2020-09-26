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