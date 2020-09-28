class Solution {
public:
    int numTeams(vector<int>& rating) {
        
        int res=0;
        for(int i=0; i<rating.size(); i++)
        {
            for(int j=0; j<i; j++)
            {
                for(int k =0; k<j; k++)
                {
                    if(rating[i]>rating[j] && rating[j]>rating[k] || rating[i]<rating[j] && rating[j]<rating[k])
                    {
                        res++;
                    }
                }
            }
        }
        return res;
    }
};