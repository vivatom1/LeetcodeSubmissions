class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,first,second,sum;
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            first=nums[i];
            for(j=i+1;j<n;j++)
            {
              second=nums[j];
            sum=first+second;
            if(sum==target)
            {
            return {i,j};
            }
            }
        }
        return {};
    }
   
};