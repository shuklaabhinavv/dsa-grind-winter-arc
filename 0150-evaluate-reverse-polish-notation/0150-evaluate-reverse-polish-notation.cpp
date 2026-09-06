class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> s;
        for (auto& x : tokens) 
        {
            if (x == "+" || x == "-" || x == "*" || x == "/") 
            {
                long long a = s.top(); 
                s.pop();
                long long b = s.top(); 
                s.pop();
                if (x == "+") s.push(b + a);
                else if (x == "-") s.push(b - a);
                else if (x == "*") s.push(b * a);
                else s.push(b / a);
            } 
            else 
            {
                s.push(stoll(x));
            }
        }
        return s.top();
    }
};