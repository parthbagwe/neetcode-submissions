class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> text;
        if(s.size()!=t.size()){
            return false;
        }
        for(int x:s){
            text[x]++;
        }
        for(int x:t){
            text[x]--;
        }
        for(auto it: text){
            if(it.second!=0){
                return false;
            }
        }
        return true;
    }
};
