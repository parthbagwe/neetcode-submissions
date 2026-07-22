class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stack1;
        int res=0;
        for(string op: operations){
            if(op=="+"){
                int top=stack1.top();
                stack1.pop();
                int newTop=top+stack1.top();
                stack1.push(top);
                stack1.push(newTop);
                res+=newTop;
            }
            else if(op=="D"){
                stack1.push(2*stack1.top());
                res+=stack1.top();
            }
            else if(op=="C"){
                res-=stack1.top();
                stack1.pop();
            }
            else{
                stack1.push(stoi(op));
                res+=stack1.top();
            }
        }
        return res;
    }
};