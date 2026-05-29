class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        string prefix = strs[0];  // base prefix

        for(int i = 1; i < strs.size(); i++){   // loop over all strings
            string temp = "";
            for(int j = 0; j < prefix.size() && j < strs[i].size(); j++){ // compare char by char
                if(prefix[j] == strs[i][j]){
                    temp += prefix[j];   // add matching char
                } else {
                    break;   // stop at mismatch
                }
            }
            prefix = temp;   // update prefix
            if(prefix.empty()) return ""; // no common prefix
        }
        return prefix;
    }
};

