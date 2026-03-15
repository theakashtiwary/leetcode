class Solution {
public:
    int majorityElement(vector<int>& nums) {

        map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;// yaha frrequency store kra di
        }

        for (auto it : m) {
            if (it.second > nums.size() / 2) { // simple si baat hai jis element ki freq n/2 se jada hai usko return kr do
                return it.first;
            }
        }
        return -1;
    }
};