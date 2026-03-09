class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>m;
        int count=0;
        m[0]=1;
        int prefix=0;
     
        for(int i=0;i<nums.size();i++){
               prefix=prefix+nums[i];
            if(m.find(prefix-k)!=m.end()){
                count=count+m[prefix-k];
            }

            m[prefix]=m[prefix]+1;

        }
        return count;
    }
};