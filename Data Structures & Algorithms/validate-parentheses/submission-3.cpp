#include <stack>
class Solution {
public:
    bool isValid(string s) {
        cout << "hello" << endl;
        stack<char>myStack;
        cout << "after making stack" << endl;
        for(int i = 0; i < s.length(); i++) {
            cout << "inside for loop" << endl;
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                cout << "char is opening brace" << endl;
                myStack.push(s[i]);
            }

            if(s[i] == ')'){
                if(myStack.empty() || myStack.top()!= '('){
                    return false;
                }
                
                myStack.pop();
            }
            if(s[i] == ']'){
                if(myStack.empty() || myStack.top()!= '[' ){
                    cout << "this case" << endl;
                    return false;
                }
                myStack.pop();
            }
            if(s[i] == '}') {
                if(myStack.empty() || myStack.top()!= '{' ) {
                    return false;
                }
                myStack.pop();
            }  
        }
        if(myStack.empty() == 0) {
            return false;
        }
        return true;
    }
    
        

        
    
};
