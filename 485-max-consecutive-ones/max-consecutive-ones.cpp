class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int j=0;
        int i=0;
        int count=0;
        int maxi=INT_MIN;
    while(j<nums.size()){

          if(nums[j]==1){
            count++;
            j++;
            
          }
          else if(nums[j]==0){
            j=i;
            count =0;
            i++;
            j++;
          }
          maxi=max(count,maxi);
        }
        return maxi;
        
    }
};