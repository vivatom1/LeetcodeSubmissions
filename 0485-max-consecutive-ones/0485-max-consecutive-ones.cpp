class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i,len=nums.size(),cnt=0;
        int Maxcnt=0;
        for(i=0;i<len;i++)
        {
            if(nums[i]==1){
            cnt++;
            if(Maxcnt<=cnt)
            Maxcnt=cnt;
            }
            else
            cnt=0;
        }
        return Maxcnt;
    }
};