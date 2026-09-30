class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j,len=nums.size(),cnt1=0;
        int k=0;
        for(i=0;i<len;i++)
        {
            if(k<2 || nums[i]!=nums[k-2]){
            nums[k]=nums[i];
            k++;
            }
           
        }
         return k;

    }
};