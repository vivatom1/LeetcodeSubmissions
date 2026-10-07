class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int i,len=nums.size(),j=0;
        vector <int> temp;
        vector <vector<int>> ans;
        for(i=0;i<(1<<len);i++)
        { 
            temp.clear();
            for(j=0;j<len;j++) 
            {
            if(i&(1<<j)) 
           temp.push_back(nums[j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};