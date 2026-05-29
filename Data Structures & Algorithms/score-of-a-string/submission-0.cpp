class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;
        for(int i =0;i<s.length()-1;i++){
            int asc1 = s[i];
            int asc2 = s[i+1];
            int sum = abs(asc1-asc2);
            ans += sum;
        }
        return ans;
    }
};