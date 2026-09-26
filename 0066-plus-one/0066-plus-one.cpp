class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;

        while(i >= 0) {
            if(digits[i] < 9) {
                digits[i]++;//makes it plus one
                return digits;
            }

            digits[i] = 0;//129-> 120 when digit is >=9
            i--;// goes to n-1 place
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};/*class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i,j,len=digits.size(),a=0,next;
        string st;
        vector<int> b;
        for(i=0;i<len;i++)
        {
            a=a*10+digits[i];
        }
        next=a+1;
        if(next==10)
        return {1,0};
        for(j=0;j<len;j++)
        {
           st=to_string(next);
           b.push_back(st[j] - '0');
        }
        return b;
        
    }
};*/