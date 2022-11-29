class Solution {
public:
    int myAtoi(string s) {
        if(s.empty()) return 0;
        long long ret=0;
        istringstream iss(s);
        iss>>ret;
        ret= ret<INT_MIN?INT_MIN:ret;
        ret= ret>INT_MAX?INT_MAX:ret;
        
        return ret;
    }
};