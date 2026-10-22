#include<bits/stdc++.h>
using namespace std;
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

string empty(string s){
    string ch;
    int x=0;
    int n=s.size();
    for (int i = 0; i < n; i++)
    {
        if(((s[i]<='z' && s[i]>='a')||(s[i]<='Z' && s[i]>='A')) ||(s[i]>='0' && s[i]<='9')){
            // cout<<"We enter"<<endl;
            ch.push_back(s[i]);
            x++;
        }
        else{
            
        }
    }
    return ch;
}
 string reverseString(string ch) {
       
    int n=ch.size();
    for (int i = 0; i < n/2; i++)
    {
        char temp= ch[i];
        ch[i]=ch[n-1-i];
        ch[n-i-1]=temp;
    }
    return ch;
 }
 /*optimal
 int low=0;
        int high=s.size()-1;
        while(low<=high){
            if(s[low]!=s[high]){
                return false;
            }
            low++;
            high--;
        }
        return false;
   
 */
int main(){
class Solution {
public:
    bool isPalindrome(string s) {
   
        string sh=toLowerCase(s);
        sh=empty(sh);
        string org=sh;
        org=reverseString( org);
        cout<<org<<endl<<sh<<endl;
        if(org==sh){
            return true;
        }
        return false;

        
    }
}
};