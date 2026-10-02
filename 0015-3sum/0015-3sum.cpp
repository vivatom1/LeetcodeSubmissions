class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                int total = nums[i] + nums[j] + nums[k];

                if (total > 0) {
                    k--;
                } else if (total < 0) {
                    j++;
                } else {
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;

                    while (nums[j] == nums[j-1] && j < k) {
                        j++;
                    }
                }
            }
        }
        return res;        
    }
};/*class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i,j,k,len=nums.size();
        vector<vector<int>> sum;
         sort(nums.begin(), nums.end());
        for(i=0;i<len-2;i++)
        {
             if(i > 0 && nums[i] == nums[i-1])
                continue;
            for(j=i+1; j < len - 1; j++) {
                 if(j > i+1 && nums[j] == nums[j-1])
                continue;
            for(k=j+1;k<len;k++){
                 if(k > j+1 && nums[k] == nums[k-1])
                continue;
            if((nums[i]+nums[j]+nums[k])==0 && i!=j && j!=k && i!=k)
            sum.push_back({nums[i],nums[j],nums[k]});
            }
            }
        }
        return sum;
    }
};*/