class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
      int ans = 1;
        int diff=0,pdiff=0;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            diff = nums[i+1]-nums[i];
            if((diff>0 && pdiff<=0) || (diff<0 && pdiff>=0)){
                ans++;
                pdiff=diff;
            }
        }
        return ans;
    }
};