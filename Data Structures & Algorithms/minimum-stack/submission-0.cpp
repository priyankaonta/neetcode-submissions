class MinStack {
private: 
    stack<int> regStack; 
    stack<int> minStack;
public:
    MinStack() {
       
    }
    
    void push(int val) {
        regStack.push(val);
        if(!minStack.empty()){
            int currMin = (std::min(val,minStack.top()));
            minStack.push(currMin);
        }
        else {
            minStack.push(val);
        }
        
        
        
    }
    
    void pop() {
        regStack.pop();
        minStack.pop();

        
        
    }
    
    int top() {
        
        return regStack.top();
        
    }
    
    int getMin() {
           return minStack.top();
    }
};
