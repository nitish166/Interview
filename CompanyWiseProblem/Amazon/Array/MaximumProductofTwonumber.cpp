class Solution{
public:

	int maxProduct(int arr[], int n) {
	    // code here
	   //int first = INT_MIN;
	   //int second = INT_MIN;
	   //for(int i=0; i<n; i++)
	   //{
	   //    first = max(first, arr[i]);
	   //}
	   //for(int i=0; i<n; i++)
	   //{
	   //    if(arr[i]!=first)
	   //    {
	   //        second = max(second, arr[i]);
	   //    }
	   //}
	   //return first*second;
	   sort(arr, arr+n);
	   return arr[n-1]*arr[n-2];
	   
	}
};