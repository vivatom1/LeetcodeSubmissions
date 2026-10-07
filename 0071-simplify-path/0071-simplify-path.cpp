class Solution {
public:
    string simplifyPath(string path) {
        int i = 0;
        int len = path.size();

        vector<string> ans;

        while(i < len) {

            if(path[i] == '/') {
                i++;

                string temp = "";

                while(i < len && path[i] != '/') {
                    temp += path[i];
                    i++;
                }

                if(temp == ".") {
                    // ignore
                }
                else if(temp == "..") {
                    if(!ans.empty())
                        ans.pop_back();
                }
                else if(temp != "") {
                    ans.push_back(temp);
                }
            }
        }

        string result = "";

        for(string x : ans) {
            result += "/" + x;
        }

        if(result == "")
            result = "/";

        return result;
    }
};