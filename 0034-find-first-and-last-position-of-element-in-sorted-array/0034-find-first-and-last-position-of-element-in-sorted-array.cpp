class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        // Find first occurrence
        int low = 0, high = n - 1;
        int p1 = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                p1 = mid;
                high = mid - 1;   // search left
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        // Find last occurrence
        low = 0;
        high = n - 1;
        int p2 = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                p2 = mid;
                low = mid + 1;    // search right
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return {p1, p2};
    }
};/*class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0,len = nums.size();
        int p1 = -1, p2 = -1;

          while(i<len){

            if (nums[i] == target) {

                if(p1==-1)
                    p1 = i;

                p2 = i;//p2 will not change
            }
            i++;
        }

        return {p1, p2};
    }
};*/