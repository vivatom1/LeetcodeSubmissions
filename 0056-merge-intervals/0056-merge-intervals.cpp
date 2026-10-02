class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int i,j,len=intervals.size();
        vector<int> end,start;
        vector<vector<int>> ind,len1;
        sort(intervals.begin(),intervals.end());
        for(i=0;i<len-1;i++)
        {
            ind.push_back(intervals[i]);
            if(intervals[i][1] >= intervals[i+1][0])
            {
                intervals[i][1] = max(intervals[i][1],
                intervals[i+1][1]);
                intervals.erase(intervals.begin()+i+1);
                i--;
                len--;
        }
        }
        return intervals;
    }
};