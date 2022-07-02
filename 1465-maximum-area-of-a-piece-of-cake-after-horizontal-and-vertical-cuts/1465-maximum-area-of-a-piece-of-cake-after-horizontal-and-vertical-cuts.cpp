class Solution {
public:
     int mod = 1000000007;
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {    sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
                                                                                       
         int maxh = max(h-horizontalCuts[horizontalCuts.size()-1],horizontalCuts[0]);
   int maxv = max(w-verticalCuts[verticalCuts.size()-1],verticalCuts[0]);
                                                                                       
        for(int i=1;i<horizontalCuts.size();i++){
            maxh = max(maxh,(horizontalCuts[i] - horizontalCuts[i-1]));
        }
        for(int i=1;i<verticalCuts.size();i++){
            maxv = max(maxv,(verticalCuts[i] - verticalCuts[i-1]));
        }
      return (int)((long)maxh*maxv%mod);                                                             }
};
