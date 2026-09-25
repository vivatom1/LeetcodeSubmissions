class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int len = nums.size();

        for (int i = 0; i < len - 1; i += 2) {
            if (nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }

        return nums[len - 1];
    }
};
/*class VivekSolution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i,len=nums.size();
        int cnt=0,el=0,j=0;
        for(i=0;i<len;i++)
        {
            if(nums[i]==nums[i+1]){
            cnt++;
            i++;}
            else 
            cnt=0;
            if(cnt==0)
            el=nums[i]; 
        }
        return el;
    }
};*/