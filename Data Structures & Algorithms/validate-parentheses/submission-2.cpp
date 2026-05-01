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
                    cout << 1 << " b " << thisStack << endl;
                } else {
                    return false;
                }
            }
            if (s[i] == ']') {
                if (thisStack[end] == '[') {
                    pop();
                    cout << 2 << " b " << thisStack  << endl;
                } else {
                    return false;
                }
            }
            if (s[i] == '}') {
                if (thisStack[end] == '{') {
                    pop();
                    cout << 3 << " b " << thisStack  << endl;
                } else {
                    return false;
                }
            }
        }


        // while((s[count] == '(' | s[count] == '[' | s[count] == '{') and count < len) {
        //     push(s[count]);
        //     count++;
        // }

        // cout << thisStack << endl;

        // while((s[count] == ')' | s[count] == ']' | s[count] == '}') and count < len) {
        //     if(thisStack[end] == '(') {
        //         cout << 1 << " a " << thisStack << endl;
        //         if(s[count] == ')') {
        //             pop();
        //             count++;
        //         }else {
        //             return false;
        //         }
        //         cout << 1 << " b " << thisStack << endl;
        //     }
        //     if(thisStack[end] == '[') {
        //         cout << 2 << " a " << thisStack  << endl;
        //         if(s[count] == ']') {
        //             pop();
        //             count++;
        //         }else {
        //             return false;
        //         }
        //         cout << 2 << " b " << thisStack  << endl;
        //     }
        //     if(thisStack[end] == '{') {
        //         cout << 3 << " a " << thisStack  << endl;
        //         if(s[count] == '}') {
        //             pop();
        //             count++;
        //         }else {
        //             return false;
        //         }
        //         cout << 3 << " b " << thisStack << endl;
        //     }
            
        // }
        cout << end;
        if(end >= 0) return false;
        return true;
    }
};
