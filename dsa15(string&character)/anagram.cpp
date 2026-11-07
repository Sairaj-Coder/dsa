#include<bits/stdc++.h>
using namespace std;
int main(){
    return 0;
}
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        map<char, int> mpp;
        map<char, int> mpp2;
        for (int i = 0; i < s.size(); i++)
        {
            mpp[s[i]]++;
            mpp2[t[i]]++;
        }
        for (int i = 0; i < mpp.size(); i++)
        {
            auto it = mpp.find(s[i]);
            auto itt = mpp2.find(s[i]);
            if (it != mpp.end() && itt != mpp2.end())
            {
                if (it->second != itt->second || it->first != itt->first)
                {
                    return false;
                }
            }
            else
            {

                return false;
            }
        }
        for (int i = 0; i < mpp2.size(); i++)
        {
            auto it = mpp.find(t[i]);
            auto itt = mpp2.find(t[i]);
            if (it != mpp.end() && itt != mpp2.end())
            {
                if (it->second != itt->second || it->first != itt->first)
                {
                    return false;
                }
            }
            else
            {

                return false;
            }
        }
        return true;
    }
};