class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> res;
        for(int num:nums){
            res[num]++;
        }
        for(int num:nums){
            if(res[num]>1){
                return true;
            }
        }
        return false;
    }
};