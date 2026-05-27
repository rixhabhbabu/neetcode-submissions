class Solution {
public:
    bool isPalindrome(string s) {
        bool pall = true;
        int i = 0;
        int j = s.length()-1;
        while(i<j){
            if(!isalnum(s[i])){i++;continue;}
            if(!isalnum(s[j])){j--;continue;}
            if(tolower(s[i]) != tolower(s[j])){
                pall = false;
                break;
            }
            i++;j--;
        }

        return pall;
    }
};
