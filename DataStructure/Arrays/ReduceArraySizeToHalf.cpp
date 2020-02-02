class Solution {
public:
    int minSetSize(vector<int>& arr) {
      set<int> s;
	vector<int> result;

	for(int i=0;i<arr.size();i++)
	{
		if(s.find(arr[i])==s.end())
		{
			s.insert(arr[i]);
			result.push_back(arr[i]);
		}
	}
	int temp = result.size();
	if(temp==1)
	{
		return temp;
	}
	temp = floor(temp/2);
        
   
	return temp;  
    }
};