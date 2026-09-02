class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size=nums.size()*2;
        int size1=nums.size();
        vector<int> res(size);
        for(int i=0; i<size1; i++){
            res[i]=nums[i];
        }
        for(int i=0; i<size1; i++){
            res[i+size1]=nums[i];
        }
        return res;
    }
};