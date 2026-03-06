class Solution {
public:
    int majorityElement(vector<int>& nums) {
      map<int,int>m;
      for(int i=0;i<nums.size();i++){
        m[nums[i]]++;
      }
      int maxf=m[nums[0]];
      int key=nums[0];
      for(auto it:m){
        if(it.second>maxf){
            maxf=it.second;
            key=it.first;
        }
      }


return key;
    }
};