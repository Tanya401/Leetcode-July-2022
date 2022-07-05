class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
       unordered_map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        int ans=1,maxp=INT_MIN;
        for(auto num:nums){
            if(mp.find(num-1)==mp.end()){
                int currnum = num;
                ans = 1;
            
          while(mp.find(currnum+1)!=mp.end()){
              currnum++;
              ans++;
          }
            maxp = max(ans,maxp);
        }
        }
        return maxp;
    }
};