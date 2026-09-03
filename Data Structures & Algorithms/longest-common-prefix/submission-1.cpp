class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size=strs.size();
        sort(strs.begin(), strs.end());
        for(int i=0; i<strs[0].size(); i++){
            if(strs[0][i]!=strs[size-1][i]){
                return strs[0].substr(0,i);
            }
        }
        return strs[0];
    }
};