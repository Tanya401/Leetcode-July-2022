class Solution {
public:
    bool isAnagram(string s, string t) {
        if(t.size()!=s.size())
            return false;
        unordered_map<char,int>mp;
            for(auto x:s)
                mp[x]++;
        for(int i=0;i<t.size();i++){
            if(mp.find(t[i])==mp.end())
                return false;
           else if(mp[t[i]]==0)
                return false;
            else
                mp[t[i]]--;
        }
        return true;
    }
};