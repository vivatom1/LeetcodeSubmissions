class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int target = 1;
        for (int n=0;n<nums.size();n++) {
            if ( nums[n] == target) {
                target++;
            } 
        }


        return target;
    }
};