class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      // sorted, first pos, last pos  
        vector<int> ans(2,-1);
        if (nums.empty()) {
            return ans;
        }
        int start = 0;
        int end = nums.size()-1;
        while(start<end){
            int mid = (end+start)/2;
           if(target > nums[mid]){
               start=mid+1;
            }
            else{
              end=mid;
            }
        }
        
        if(nums[start] != target)
            return ans;
        
        ans[0] = start;
        end = nums.size()-1;
        
        while(start<end){
            int mid = (end+start)/2 +1;
           if(target < nums[mid]){
                end = mid-1;
            }
            else{
                start = mid;
            }
        }
        ans[1] = end;
        return ans;
    }
};