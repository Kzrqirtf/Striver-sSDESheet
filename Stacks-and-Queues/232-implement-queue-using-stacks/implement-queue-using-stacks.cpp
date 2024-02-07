class MyQueue {
    stack<int> input,output;
public:

    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(output.empty())
        {
            while(input.size())
             {   output.push(input.top());
                input.pop();}
        }
        int x = output.top();
        output.pop();
        return x;
        
    }
    
    int peek() {
        if(output.empty())
        {
            while(input.size())
             {   output.push(input.top());
                input.pop();}
        }
        int x = output.top();
        return x;
        
    }
    
    bool empty() {
        if(input.size()==0 && output.size()==0)return 1;
        return 0;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */