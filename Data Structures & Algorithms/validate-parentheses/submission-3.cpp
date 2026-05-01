class Solution {
private: 
    char thisStack[1001];
    int end = -1;
    int count = 0;

    void push(char data) {
        thisStack[++end] = data;
    }
    void pop() {
        end--;
    }

public:
    bool isValid(string s) {
        int len = s.length();
        if(s[0] == ')' | s[0] == ']' | s[0] == '}') return false;

        for(int i = 0; i < len; i++){
            if (s[i] == '(' | s[i] == '[' | s[i] == '{' ) {
                push(s[i]);
                continue;
            }
            if (s[i] == ')') {
                if (thisStack[end] == '(') {
                    pop();
                } else {
                    return false;
                }
            }
            if (s[i] == ']') {
                if (thisStack[end] == '[') {
                    pop();
                } else {
                    return false;
                }
            }
            if (s[i] == '}') {
                if (thisStack[end] == '{') {
                    pop();
                } else {
                    return false;
                }
            }
        }
        if(end >= 0) return false;
        return true;
    }
};
