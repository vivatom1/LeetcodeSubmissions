class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i,j,len=nums.size(),cnt=1;
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(i=0;i<len-1;i++)
        {
            if(nums[i]==nums[i+1])
            cnt++;
            else{
            
            if(cnt==1)
            return nums[i];
            cnt=1;
            
            }
        } 
        if(cnt==1)
        return nums[len-1];
        
        return -1;
       
    }
};