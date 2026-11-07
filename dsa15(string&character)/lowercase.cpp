class Solution {
public:
    string toLowerCase(string s) {
        int size= s.size();
        for(int i=0;i<size;i++){
            int ch = s[i];
            if(ch>='a' && ch <='z'){
                continue;
            }
            else if(ch>='A' && ch<='Z'){
                s[i]=(ch-'A')+'a';
            }
        }
        return s;
    }
};