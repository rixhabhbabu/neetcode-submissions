class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int carry = 0;
        int i = a.size()-1;
        int j = b.size()-1;

        while(i>=0 && j>=0){
            if(carry==0){
                if(a[i] == '0' && b[j]=='0'){ans.insert(ans.begin(),'0');}
                else if(a[i]=='1' && b[j] == '1'){ans.insert(ans.begin(),'0');carry=1;}
                else{ans.insert(ans.begin(),'1');}
            }
            else{
                if(a[i] == '0' && b[j]=='0'){ans.insert(ans.begin(),'1');carry=0;}
                else if(a[i]=='1' && b[j] == '1'){ans.insert(ans.begin(),'1');}
                else{ans.insert(ans.begin(),'0');}
            }
            i--;j--;
        }
        while(i>=0){
            if(carry==0){
                ans.insert(ans.begin(),a[i]);
            }
            else{
                if(a[i] == '0'){ans.insert(ans.begin(),'1');carry=0;}
                else{ans.insert(ans.begin(),'0');}
            }
            i--;
        }
        while(j>=0){
            if(carry==0){
                ans.insert(ans.begin(),b[j]);
            }
            else{
                if(b[j] == '0'){ans.insert(ans.begin(),'1');carry=0;}
                else{ans.insert(ans.begin(),'0');}
            }
            j--;
        }
        if(carry==1){
            ans.insert(ans.begin(),'1');
        }
        return ans;
    }
};