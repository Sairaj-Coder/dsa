class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mpp;
        
        int n=s.size();
        for(int i=0;i<n;i++){
            mpp[int(s[i])]++;
        }

       vector<pair<char, int>> v(mpp.begin(), mpp.end());//learn how to sort according to map pairs

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
          return a.second > b.second;
       });
       string ss;

       for (int i = 0; i < v.size(); i++) {
        // cout << v[i].first << " " << v[i].second << endl;
        
        while(v[i].second>0){
            ss.push_back(v[i].first);
            v[i].second--;

        }
        }
        return ss;

    }
};