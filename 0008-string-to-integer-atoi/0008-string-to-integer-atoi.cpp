class Solution {
public:
    int myAtoi(string s) {
        int a=0;
         int i = 0;
         long long num=0;
        int l = s.size();

        while(i < l && s[i] == ' ')
            i++;

        int sign = 1;

        if(i < l && (s[i] == '+' || s[i] == '-')) {
            if(s[i] == '-')
                sign = -1;

            i++;
        }
        while(i<l && isdigit(s[i])) {
         num = num * 10 + (s[i]- '0');
           if(sign*num>INT_MAX)
            return INT_MAX;
          if(sign*num<INT_MIN)
            return INT_MIN;
          
        i++;
        }
        return sign*num;
    }
};