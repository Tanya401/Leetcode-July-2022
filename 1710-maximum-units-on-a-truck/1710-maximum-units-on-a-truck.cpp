class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[](vector<int>a,vector<int>b){
            return a[1]>b[1];
        });
        int totalunits = 0;
        for(int i=0;i<boxTypes.size();i++){
            if(boxTypes[i][0] <= truckSize){
                 totalunits += boxTypes[i][0] * boxTypes[i][1];
                truckSize = truckSize - boxTypes[i][0];
               }
           else if(boxTypes[i][0]>truckSize){
                totalunits += truckSize * boxTypes[i][1];
                break;
            }
        }
        return totalunits;
    }
};