class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int i=0,j=1,k=0;
        vector<vector<int>> pascal;
        
        while(k<numRows){
            vector<int> row;
            for(j=0;j<=k;j++){
            if(j==0||j==k)
             row.push_back(1);
            else
        row.push_back(pascal[k-1][j-1]+pascal[k-1][j]);
            }
        pascal.push_back(row);
        k++;
        }
        
        return pascal;
    }
};