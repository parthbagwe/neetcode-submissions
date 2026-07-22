class Solution {
public:
    bool isValid(string s) {
        stack<int> stack1;
        for(char c: s){
            if(c=='{'||c=='('||c=='['){
                stack1.push(c);
            }
            else{
                if(stack1.empty()){
                    return false;
                }
                if(c=='}' && stack1.top()!='{'){
                    return false;
                }
                if(c==')' && stack1.top()!='('){
                    return false;
                }
                if(c==']' && stack1.top()!='['){
                    return false;
                }
                stack1.pop();
            }
        }
        return stack1.empty();
    }
};
