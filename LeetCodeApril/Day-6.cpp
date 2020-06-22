
// Time complexity: O(nklogk)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        
        vector<vector<string>> res;
        
        unordered_map<string, vector<string> >mymap;
        
        for(string& s: strs)
        {
            string t = s;
            sort(t.begin(), t.end());
            mymap[t].push_back(s);
        }
        
        for(auto& e: mymap)
        {
            res.push_back(move(e.second));
        }
        
        return res;
    }
};