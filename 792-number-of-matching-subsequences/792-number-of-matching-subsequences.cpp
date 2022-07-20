class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        // match subsequences..... 
        // int count=0;
        // unordered_map<char,int> mp;
        // for(auto x:s)
        //     mp[x]++;
        // for(int i = 0;i<words.size();i++){
        //     string res = words[i];
        //     int j = 0;
        //    // while i find res in mp
        //     while(mp.find(res[j])!=mp.end()){
        //         mp[res[j]]--;
        //         j++;
        //         count++;
        //     }
        // }
        // return count;
        int count = 0;
        unordered_map<string,int> mp;
        for(int i= 0; i < words.size(); i++){
            mp[words[i]]++;
        }
        for(auto x : mp){
            string str = x.first;
            int n = str.size();
            int i = 0, j = 0;
            while(i < n && j < s.size()){
                if(str[i] == s[j]){
                    i++;
                }
                j++;
            }
            if(i == n){
                count += x.second;
            }
        }
        
        return count;
    }
};