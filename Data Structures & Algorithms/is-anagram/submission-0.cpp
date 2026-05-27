class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count(26,0);
        if(s.size()!=t.size()){return false;}
        for(int i = 0;i<s.size();i++){
            count[s[i] - 'a']++;
        }
        for(int i=0;i<t.size();i++){
            int index = t[i] - 'a';
            if(count[index] == 0){return false;}
            else{count[index]--;}
        }
        return true;
    }
};
