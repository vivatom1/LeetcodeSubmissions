class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=1,max=1,i,len=nums.size();
        if(nums.size()==0)
            return 0;
        for(i=0;i<len-1;i++){
        if(nums[i+1]==(nums[i]+1))
        cnt++;
        else if(nums[i+1] != nums[i]) {
                cnt = 1;
            }
            
        
        if(max<cnt)
        max=cnt;
    }
        return (max);
    }
};