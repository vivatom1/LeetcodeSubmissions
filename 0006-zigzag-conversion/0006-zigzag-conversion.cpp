class Solution {
public:
    string convert(string s, int numRows) {
         int i,j=0;
         int len=s.size();
         string s1="";
         if(numRows==1||numRows>=len)
         return s;
         int direction=1;
         vector<string> rows(numRows);
         for(i=0;i<len;i++)
         {
            rows[j]=rows[j]+s[i];
            if(j==numRows-1)
            direction=-1;
            if(j==0)
            direction=1;
           j=j+direction;
         }
         for(i=0;i<numRows;i++){
         s1=s1+""+rows[i];
         }
         return s1;
    }
};