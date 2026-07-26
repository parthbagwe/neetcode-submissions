class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> stack;
        for(int i=0; i<asteroids.size(); i++){
            while(!stack.empty() && asteroids[i]<0 && stack.back()>0){
                int diff=asteroids[i]+stack.back();
                if(diff<0){
                    stack.pop_back();
                }
                else if(diff>0){
                    asteroids[i]=0;
                }
                else{
                    asteroids[i]=0;
                    stack.pop_back();
                }
            }
            if(asteroids[i]!=0){
                stack.push_back(asteroids[i]);
            }
        }
        return stack;
    }
};