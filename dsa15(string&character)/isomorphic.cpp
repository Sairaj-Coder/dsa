class Solution {
public:
    bool isIsomorphic(string s, string t) {
  
        map<char,char> mpp1;
       map<char,char>mpp2;
        for(int i=0;i<s.size();i++){
            char temp=s[i];
            auto it = mpp1.find(temp);
            if(it !=mpp1.end()){
                // cout<<it->first<<it->second<<endl;
                continue;
            }
            
           auto it2 = mpp2.find(t[i]);    
            if(it2 !=mpp2.end()){
                // cout<<it->first<<it->second<<endl;
                continue;
            }
            else{
                mpp2[t[i]]=s[i]; 
                mpp1[s[i]]=t[i];
            }
        }
        cout<<endl;
        for(auto it:mpp1){
            // cout<<it.first<<it.second<<endl;
        }
        for(int i=0;i<s.size();i++){
            auto it = mpp1.find(s[i]);
            if(it != mpp1.end()){
                if(it->second!=t[i]){
                    return false;
                }

            }
            else{
                return false;
            }
        
            
        }
       
        return true;
        
    }
};